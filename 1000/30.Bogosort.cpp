#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>

void solve(){
  
  ll n; cin>>n;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  sort(a.rbegin(),a.rend());
  f(i,0,n) cout<<a[i]<<" ";
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