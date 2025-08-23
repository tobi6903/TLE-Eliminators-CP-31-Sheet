#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

vll findfac(ll n){
  vll b;
  for(ll i=1;i*i<=n;i++){
    if((n%i) == 0){
      b.push_back(i); b.push_back(n/i);
    }
  }
  return b;
}


void solve(){
  
  ll n; cin>>n;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  vll b=findfac(n);
  ll maxi,mini;
  ll ans=0;
  
  for(ll i=0;i<b.size();i++){
    ll sum=0; ll temp = b[i];
    
    maxi=LLONG_MIN; ll mini=LLONG_MAX;
    for(ll j=0;j<n;j++){
      for(ll k=0;k<temp;k++){
        sum+=a[j];j++;
      }
      j--;
      maxi= max(maxi,sum);
      mini= min(mini,sum);
      ans = max(ans,maxi-mini);
      sum=0;
    }
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