#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  if(n*a<=(b/m)*n){
      cout<<n*a<<endl;
  }
  else{
      if(n%m==0){
          cout<<(n*b)/m<<endl;
      }
      else{
          int ans=(n/m)*b;
          if(((n-(n/m)*m)*a)<=b){
              ans+=(n-(n/m)*m)*a;
          }
          else{
              ans+=b;
          }
          cout<<ans<<endl;
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
	
	
	    solve();
	
	return 0;
}
