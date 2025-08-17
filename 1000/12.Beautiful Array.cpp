#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>

void print(vector<ll> ans){
  for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<"\n";
}

void solve(){
  ll n,k,b,s; cin>>n>>k>>b>>s;
  ll mini = k*b, maxi = k*b+(k-1)*n;
  if(s<mini || s>maxi) {
    cout<<-1<<endl; return;
  }
  ll f=n-1;
  
  vll ans(n,0); ll j=0;
  
  // cout<<k*b+(k-1)<<" ";
  // s-=(k*b+(k-1));
  // ans[j]=k*b+(k-1);j++;
  
  if(s<=k*b+(k-1)){
    ans[j]=s; print(ans);
    return;
  }
  else{
    ans[j]=k*b+(k-1); s-=(k*b+(k-1)); j++;
  }
  
  while(s>0){
    if(s-(k-1)>0){
      ans[j]=k-1; s-=(k-1);j++;
    }
    else{
      ans[j]=s; print(ans);
      return;
    }
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
