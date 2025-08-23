#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  
  ll n,k; cin>>n>>k;
  vll a(n,0), b(n,0);
  f(i,0,n) cin>>a[i];
  f(i,0,n) cin>>b[i];
  
  ll ans=0, maxi=0, sum=0;
  
  for(int i=0;i<min(k,n);i++){
    sum+=a[i];
    maxi=max(maxi,b[i]);
    ans=max(ans,sum+(k-i-1)*maxi);
  }
  
  cout<<ans<<endl;
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