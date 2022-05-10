#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n;
  cin>>n;
  int A[n];
  int mn=INT_MAX;
  for(int i=0;i<n;i++){
      cin>>A[i];
      if(mn>=A[i]){
          mn=A[i];
      }
  }
  int ans=0;
  for(int i=0;i<n;i++){
      if(A[i]>mn){
      ans+=A[i]-mn;
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
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
