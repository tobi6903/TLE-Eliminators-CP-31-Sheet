#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>

using namespace std;

int main() 
{
  ll n,d; cin>>n>>d;
  vll a(n,0);
  f(i,0,n) cin>>a[i];
  
  ll l=0,r=n-1;
  ll ans=0; sort(a.rbegin(),a.rend());
  
  // 9 8 7 3 3 2 2 1
  
  while(r>=l){
    if(a[l]>d){
      if(r>=l){
      ans++;l++;
      }
    }
    else{
      ll val= d/a[l] + 1;
      if(r-val+2>l){
        ans++;l+=1;r-=val-1;
      }
      else{
        break;
      }
    }
  }
  
  cout<<ans<<endl;
  
  
  return 0; 
}