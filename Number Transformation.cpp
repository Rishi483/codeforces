#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int x,y;
  cin>>x>>y;
  if(y<x){
      cout<<0<<" "<<0<<endl;
      return;
  }
  else if(x==y){
      cout<<1<<" "<<1<<endl;
      return;
  }
  else{
      int a=y/x;
      for(int i=1;i<=a;i++){
          for(int j=1;j<=a;j++){
              if((pow(i,j)*x)==y){
                  cout<<j<<" "<<i<<endl;
                  return;
              }
          }
      }
       cout<<0<<" "<<0<<endl;
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
