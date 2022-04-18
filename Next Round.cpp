#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n,k;
  cin>>n>>k;
  int A[n];
  for(int i=0;i<n;i++){
      cin>>A[i];
  }
  int flag=A[k-1];
  int sum=0;
  for(int i=0;i<n;i++){
      if(A[i]>=flag && A[i]>0){
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
