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
  int n,m;
  cin>>n>>m;
  int A[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          char x;
          cin>>x;
          if(x=='E'){
              A[i][j]=0;
          }
          else{
              A[i][j]=1;
          }
      }
  }
  if(A[0][0]==1){
      cout<<"YES"<<endl;
      return;
  }
  int minr=INT_MAX;
  int minc=INT_MAX;
  int mins=INT_MAX;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(A[i][j]==1){
              int x=i-0;
              int y=j-0;
              if(x<minr){
                  minr=x;
              }
              if(y<minc){
                  minc=y;
              }
              if(x+y<mins){
                  mins=x+y;
              }
          }
      }
  }
  if(minr+minc>=mins){
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
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
