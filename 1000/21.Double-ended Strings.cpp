#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>


void solve(){
  string a,b; cin>>a>>b;
  ll ans=0;
  ll n=a.size(),m=b.size();
  
  for(ll len=1;len<=min(n,m);len++){
    for(ll i=0;i+len<=n;i++){
      for(ll j=0;j+len<=m;j++){
        string s1=a.substr(i,len);
        string s2=b.substr(j,len);
        
        if(s1==s2){
          ans=max(ans,len);
        }
      }
    }
  }
  cout<<n+m-2*ans<<endl;
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