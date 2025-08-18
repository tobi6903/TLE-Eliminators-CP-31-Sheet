#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>



void solve(){
  
  ll w,h; cin>>w>>h;
  ll n1;cin>>n1;
  vll a1(n1,0);
  f(i,0,n1) cin>>a1[i];
  ll n2;cin>>n2;
  vll a2(n2,0);
  f(i,0,n2) cin>>a2[i];
  ll n3;cin>>n3;
  vll a3(n3,0);
  f(i,0,n3) cin>>a3[i];
  ll n4;cin>>n4;
  vll a4(n4,0);
  f(i,0,n4) cin>>a4[i];
  
  cout<<max(
    h * (a1[n1-1] - a1[0]),
    max(
        h * (a2[n2-1] - a2[0]),
        max(
            w * (a3[n3-1] - a3[0]),
            w * (a4[n4-1] - a4[0])
        )
    )
)
<<endl;
  
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
