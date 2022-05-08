#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  if(a>=x && b>=y){
      yes
      return;
  }
  else{
      int n=0;
      if(a<x){
          n+=(x-a);
      }
      if(b<y){
          n+=(y-b);
      }
      if(n<=c){
          yes
      }
      else{
          no
      }
  }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
