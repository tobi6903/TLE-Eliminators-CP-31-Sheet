#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  
  ll n;cin>>n;
  string s;cin>>s;
  stack<char> st;
  
  for(ll i=0;i<n;i++){
    if(s[i]=='(') st.push(s[i]);
    else{
      if(!st.empty() && s[i]==')' && st.top()=='(') st.pop();
      else st.push(s[i]);
    }
  }
  cout<<(st.size())/2<<endl;
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