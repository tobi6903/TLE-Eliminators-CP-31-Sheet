#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>



void solve(){
  
  ll n,r,b; cin>>n>>r>>b;
  ll length_of_red = r/(b+1);
  ll remaining_red=r%(b+1);
  
  for(int times=1;times<=b+1;times++){
    for(int i=0;i<length_of_red;i++) 
      cout<<'R';
    
    if(remaining_red>0){
      cout<<'R'; remaining_red--;
    }
    
    if(times!=b+1)
      cout<<"B";
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
