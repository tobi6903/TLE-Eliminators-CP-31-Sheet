#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>



void solve(){
  
  ll n; cin>>n;
  vpll a(n,{0,0}),b;
  f(i,0,n) {
    ll te; cin>>te;
    pair<ll,ll> pp={te,i};
    a[i]=pp;
  }
  b=a;
  sort(a.rbegin(),a.rend());
  map<pair<ll,ll>,ll> mpp;
  ll r=1,l=-1;ll flag=1; ll time=0;
  f(i,0,n){
    if(flag) {
      ll val=a[i].first;
      ll ind = a[i].second;
      mpp[{val,ind}]=r;time+=2*val*abs(r); r++; flag=0;
    }
    else{
      ll val=a[i].first;
      ll ind = a[i].second;
      mpp[{val,ind}]=l;time+=2*val*abs(l); l--;flag=1;
    }
  }
  
  cout<<time<<endl;
  cout<<0<<" ";
  for(ll i=0;i<n;i++){
    cout<<mpp[{b[i].first,b[i].second}]<<" ";
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
