#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp map<ll,ll>

void solve(){
  
  // ll a1,b1;cin>>a1>>b1;
  // ll a=min(a1,b1);
  // ll b=max(a1,b1);
  // vll v1,v2;
  
  // ll cnt1=0,cnt2=0;
  
  // while(a>0){
  //   if(a&1){
  //     v1.push_back(1);cnt1++;
  //   }
  //   else v1.push_back(0);
  //   a/=2;
  // }
  
  // while(b>0){
  //   if(b&1) {
  //     v2.push_back(1);cnt2++;
  //   }
  //   else v2.push_back(0);
  //   b/=2;
  // }
  
  // if(cnt1!=cnt2){
  //   cout<<-1<<endl; return;
  // }
  
  // reverse(v1.begin(),v1.end());reverse(v2.begin(),v2.end());
  // ll n=v1.size() , m=v2.size();
  // // cout<<n<<" "<<m<<endl;
  // f(i,0,n){
  //   if(v1[i]!=v2[i]){
  //     cout<<-1<<endl; return;
  //   }
  // }
  // ll ans1=(m-n)/3;
  // ll ans2=((m-n)%3)/2;
  // ll ans3=(((m-n)%3)%2);
  
  // cout<<ans1+ans2+ans3<<endl;
  
  ll a,b; cin>>a>>b;
  ll ra=a,rb=b;
  
  while(ra%2==0) ra/=2;
  while(rb%2==0) rb/=2;
  if(ra!=rb){
    cout<<-1<<endl; return;
  }
  else{
    a/=ra; b/=rb;
    a=log2(a); b = log2(b);
    ll ans=ceil(abs(a-b)/3.0);
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