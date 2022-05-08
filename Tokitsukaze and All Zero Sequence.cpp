#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n;
  cin>>n;
  int A[n];
  int hsh[101]{0};
  for(int i=0;i<n;i++){
     cin>>A[i];
     hsh[A[i]]++;
  }
  if(hsh[0]>0){
      cout<<n-hsh[0]<<endl;
      return;
  }
  bool rep=false;
  for(int i=0;i<101;i++){
      if(hsh[i]>1){
          rep=true;
      }
  }
  if(rep==true){
      cout<<n<<endl;
  }
  else{
      cout<<n+1<<endl;
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
