#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>

ll next_prime(ll n){
  for(int i=n;;i++){
    bool prime=true;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        prime=false;
        break;
      }
    }
    if(prime) return i;
  }
  
}


void solve(){
  
  ll d; cin>>d;
  
  ll p = next_prime(d+1);
  ll q = next_prime(p+d);
  
  ll ans = min(1LL*p*p*p,1LL*p*q);
  
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