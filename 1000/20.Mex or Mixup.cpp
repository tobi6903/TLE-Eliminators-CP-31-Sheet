#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>


ll xor_val(ll n){
  ll xorr;
  if(n%4==0) xorr=n;
  else if(n%4==1) xorr=1;
  else if(n%4==2) xorr=n+1;
  else xorr=0;
  
  return xorr;
}

void solve(){
  
  ll a,b; cin>>a>>b;
  ll x=xor_val(a-1); ll ans=0;
  
  if(x==b) ans=a;
  else if(x!=b && (x^b) != a) ans=a+1;
  else ans=a+2;
  
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