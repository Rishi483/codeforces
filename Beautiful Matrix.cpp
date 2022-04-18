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
  int A[5][5];
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          cin>>A[i][j];
          if(A[i][j]==1){
              x=i;
              y=j;
          }
      }
  }
  x++;
  y++;
  cout<<abs(x-3)+abs(y-3)<<endl;
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
