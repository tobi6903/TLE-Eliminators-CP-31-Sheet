#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  ll n; cin>>n;
  vpll a(n,{0,0});
  ll f;
  f(i,0,n){
    cin>>f;
    a[i]={f,i};
  }
  
  vll pre(n,0);
  sort(a.begin(),a.end());
  pre[0]=a[0].first;
  f(i,1,n){
    pre[i]=pre[i-1]+a[i].first;
  }
  
  vll ans(n,0);
  f(i,0,n){
    ll j=i;
    ll found=i;
    while(j<n){
      pair<ll,ll> temp={pre[j]+1,INT_MIN};
      ll ind=lower_bound(a.begin(),a.end(),temp)-a.begin();
      ind--;
      if(ind==j) break;
      found+=ind-j;
      j=ind;
    }
    ans[a[i].second]=found;
  }
  
  f(i,0,n) cout<<ans[i]<<" ";
  cout<<"\n";
  
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}