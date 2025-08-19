#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>

void solve(){
  
  ll n,m; cin>>n>>m;
  ll k=n*m;
  vll a(k,0),b(k,0);
  
  f(i,0,k){
   cin>>a[i];
   b[i]=abs(a[i]);
  }
  
  ll cnt0=0,cnt1=0;
  
  f(i,0,k){
    if(a[i]==0) cnt0++;
    else if(a[i]<0) cnt1++;
  }
  ll ans=0;
  sort(a.begin(),a.end()) ; sort(b.begin(),b.end());
  if(cnt0>=0 && cnt1==0){
    f(i,0,k) ans+=a[i];
    cout<<ans<<endl; return;
  }
  
  if((cnt0+cnt1)%2==0){
    f(i,0,k) ans+=abs(b[i]);
    cout<<ans<<endl;
  }
  else{
    f(i,1,k) ans+=abs(b[i]);
    ans-=b[0];
    cout<<ans<<endl;
  }
  
  

  
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