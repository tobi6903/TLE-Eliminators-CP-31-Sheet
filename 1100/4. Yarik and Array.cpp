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
  f(i,0,n){
    cin>>a[i];
  }
  
  ll i=0,j=0;
  ll ans=INT_MIN,sum=0;
  
  while(j<n){
    if(sum<0){
      sum=0;i=j;
    }
    if(i<j){
      if((a[j]^a[j-1])&1){
        sum+=a[j];
      }
      else{
        sum=a[j];
        i=j;
      }
    }
    else{
      sum=a[j];
    }
    ans=max(ans,sum);
    j++;
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