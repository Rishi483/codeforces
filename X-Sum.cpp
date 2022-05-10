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
  int m,n;
  cin>>n>>m;
  int A[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>A[i][j];
      }
  }
  int mx=INT_MIN;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          int sum=0;
        
          for(int k=0;k<n;k++){
              for(int l=0;l<m;l++){
                  
                  if(abs(k-i)==abs(l-j)){
                      sum+=A[k][l];
                  }
              }
          }
          if(mx<sum){
              mx=sum;
          }
      }
  }
  cout<<mx<<endl;
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
