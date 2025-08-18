#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>



void solve(){
  
  ll n,k; cin>>n>>k;
  string s; cin>>s;
  vll pre(n+1,0);
  
  if(s[0]=='B') pre[1]=1;
  f(i,1,n){
    if(s[i]=='B'){
      pre[i+1]=pre[i]+1;
    }
    else pre[i+1]=pre[i];
  }
  
  // f(i,0,n+1){
  //   cout<<pre[i]<<" ";
  // }
  // cout<<"\n";
  
  ll ans=k;
  f(i,k,n+1){
    ans=min(ans , k-(pre[i]-pre[i-k]));
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
