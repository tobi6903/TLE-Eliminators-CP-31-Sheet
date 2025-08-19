#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  ll n; cin>>n;
  string s;cin>>s; ll flag=0;
  f(i,0,n-1){
    if(s[i]<=s[i+1]) continue;
    else flag=1;
  }
  if(flag==0){
    cout<<"NO"<<endl; return;
  }
  f(i,0,n-1){
    if(s[i]>s[i+1]) {
      cout<<"YES"<<endl;
      cout<<i+1<<" "<<i+2<<endl; break;
    }
  }
  
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}