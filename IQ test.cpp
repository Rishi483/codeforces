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
  int odd=0;
  int even=0;
  int A[n];
  for(int i=0;i<n;i++){
      cin>>A[i];
      if(A[i]%2==0){
          even++;
      }
      else{
          odd++;
      }
  }
  if(even<odd){
      for(int i=0;i<n;i++){
          if(A[i]%2==0){
              cout<<i+1<<endl;
              return;
          }
      }
  }
  else if(odd<even){
      for(int i=0;i<n;i++){
          if(A[i]%2!=0){
              cout<<i+1<<endl;
              return;
          }
      }
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
