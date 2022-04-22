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
  int A[n];
  for(int i=0;i<n;i++){
      cin>>A[i];
  }
  int f=n/2;
  if(n%2!=0) f++;
  vector<int> odd;
  vector<int> even;
  //even->1
  //odd->0
  for(int i=0;i<n;i++){
     if((i+1)%2==0){
         if(A[i]%2==0){
             even.push_back(1);
         }
         else{
             even.push_back(0);
         }
     }
     else{
          if(A[i]%2==0){
             odd.push_back(1);
         }
         else{
             odd.push_back(0);
         }
     }
      
  }
  bool oddb=true;
  bool evenb=true;
  for(int i=1;i<n/2;i++){
      if(even[i]!=even[i-1]){
          evenb=false;
          break;
      }
  }
 
  for(int i=1;i<f;i++){
      if(odd[i]!=odd[i-1]){
          oddb=false;
          break;
      }
  }
  if(oddb==true && evenb==true){
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
