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
  
  if(n>=5){
  if(n%5==0){
      cout<<n/5<<endl;
  }
  else{
      cout<<(n/5)+1<<endl;
  }
  }
  else{
      cout<<1<<endl;
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
