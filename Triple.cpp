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
  int hsh[n+1]{0};
  for(int i=0;i<n;i++){
  cin>>A[i];
  hsh[A[i]]++;
  }
  bool found=false;
  for(int i=0;i<=n;i++){
      if(hsh[i]>=3){
          cout<<i<<endl;
          found=true;
          break;
      }
  }
  if(found==false){
      cout<<-1<<endl;
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
