#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>

void solve(){
  
  ll n,x; cin>>n>>x;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  vpll b(n,{0,0});
  f(i,0,n) b[i]={a[i]-x,a[i]+x};
  
  ll ans=0;
  
  ll lower=b[0].first,upper=b[0].second;
  
  f(i,1,n){
    ll ffirst = b[i].first, fsecond = b[i].second;
    
    if(max(lower,ffirst)>min(fsecond,upper)){
      ans++; lower=ffirst; upper=fsecond;
    }
    else{
      lower=max(lower,ffirst); 
      upper = min(upper,fsecond);
      
    }
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
