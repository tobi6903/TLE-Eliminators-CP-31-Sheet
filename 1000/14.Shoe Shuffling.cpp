#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>

void print(vll ans){
  for(auto it:ans){
    cout<<it<<" ";
  }
  cout<<"\n";
}

void solve(){
  
  ll n; cin>>n;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  
  vll ans;
  
  ll l=0,r=1;
  ll cnt=1;
  if(n==1 || a[0]!=a[1] || a[n-1]!=a[n-2]){
    cout<<-1<<endl; 
      return;
  }
  
  while(r<n){
    if(a[l]!=a[r] && r-l==1){
      cout<<-1<<endl; 
      return;
    }
    else{
      
      while(r<n && a[l]==a[r]){
       r++;
      }
      cnt=r-l;
      while(l<r-1){
        // cout<<l+2<<" ";
        ans.push_back(l+2);
        l++;
      }
      // cout<<r-cnt+1<<" ";
      ans.push_back(r-cnt+1);
    }
    
    l=r; r=r+1;cnt=1;
  }
  

  print(ans);
  
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
