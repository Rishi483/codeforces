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
  int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
  bool ans=false;
  for(int i=0;i<12;i++){
      if(n%arr[i]==0){
          ans=true;
          break;
      }
  }
  if(ans){
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
	
	    solve();
	
	return 0;
}
