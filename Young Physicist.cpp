#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n;
  cin>>n;
  int sumx=0;
  int sumy=0;
  int sumz=0;
  while(n--){
      int x,y,z;
      cin>>x>>y>>z;
      sumx+=x;
      sumy+=y;
      sumz+=z;
  }
  if(sumx==0 && sumy==0 && sumz==0){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
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
