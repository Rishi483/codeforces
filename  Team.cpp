#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
    int t;
    cin>>t;
    int sum=0;
    
while(t--){
  int x,y,z;
  cin>>x>>y>>z;
  int noOfOne=0;
  if(x==1) noOfOne++;
  if(y==1) noOfOne++;
  if(z==1) noOfOne++;
  if(noOfOne>=2){
      sum++;
  }
    }
    cout<<sum<<endl;
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
