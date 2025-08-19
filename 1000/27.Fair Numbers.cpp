#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

bool isFair(ll n){
  ll num=n;
  while(num>0){
    ll dig=num%10;
    if(dig!=0 && n%dig!=0) return false;
    num/=10;
  }
  return true;
}

void solve(){
  
  ll n; cin>>n;
  while(!isFair(n)) n+=1; //O(2520)
  
  cout<<n<<endl;
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