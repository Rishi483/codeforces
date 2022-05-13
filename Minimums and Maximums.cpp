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
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  if(l1>l2){
      if(l1>r2){
          cout<<l2+l1<<endl;
      }
      else{
          cout<<l1<<endl;
      }
  }
  else{
      if(l2>r1){
          cout<<l1+l2<<endl;
      }
      else{
          cout<<l2<<endl;
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
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
