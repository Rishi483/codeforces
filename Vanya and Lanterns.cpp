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
  double l;
  cin>>n>>l;
  double A[n];
  bool z=false;
  bool e=false;
  for(int i=0;i<n;i++){
      cin>>A[i];
      
  }
  sort(A,A+n);
  
  vector<double> diff;
 
 
  for(int i=1;i<n;i++){
      diff.push_back((A[i]-A[i-1]));
  }
  double mx=max(A[0],l-A[n-1])*2;
   
  for(int i=0;i<diff.size();i++){
      mx=max(mx,diff[i]);
  }
  cout.precision(20);
  cout<<fixed<<mx/2<<endl;
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
