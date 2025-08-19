#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  
  ll n; cin>>n;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  mp mpp;
  f(i,0,n) mpp[a[i]]++;
  for(auto it:mpp){
    if(it.second>1) {
      cout<<"YES"<<endl; return;
    }
  }
  cout<<"NO"<<endl;
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