#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  
  ll n; cin>>n;
  string s;cin>>s;
  set<char> st;
  vector<int> distinct(n,0);
  
  f(i,0,n){
    st.insert(s[i]);
    distinct[i]=st.size();
  }
  
  ll ans=0;
  f(i,0,n){
    ans+=distinct[i];
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