#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>

void solve(){
  
  ll x,y,k; cin>>x>>y>>k;
  ll coal=k*y;
  ll sticks=k*x;
  ll total_sticks=coal+sticks;
  ll cnt=0;
  total_sticks-=x; cnt++;
 
  ll quo=total_sticks/(x-1); cnt+=quo;
  if(total_sticks%(x-1)) cnt++;

  cout<<cnt<<endl;
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