#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>


void solve(){
  ll a,b; cin>>a>>b;
  ll ans=INT_MAX;
  for(int addition=0;addition<32;addition++){
    ll ops=addition;
    ll new_b=b+addition;
    if(new_b==1) continue;
    ll copy_a=a;
    while(copy_a>0){
      ops++;
      copy_a/=new_b;
    }
    ans=min(ans,ops);
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