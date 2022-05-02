#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n,m;
  cin>>n>>m;
  int A[m];
  for(int i=0;i<m;i++){
      cin>>A[i];
  }
  int ans=0;
  ans+=A[0]-1;
  for(int i=1;i<m;i++){
      if(A[i]>=A[i-1]){
          ans+=A[i]-A[i-1];
      }
      else{
          ans+=n-A[i-1]+A[i];
      }
  }
  cout<<ans<<endl;
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
