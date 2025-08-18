#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>



void solve(){
  
  ll n; cin>>n;
  n--;
  ll msb=log2(n);
  ll val = pow(2,msb);
  val--;
  while(val>=0){
    cout<<val<<" "; val--;
  }
  
  val = pow(2,msb);
  while(val<=n){
    cout<<val<<" "; val++;
  }
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
