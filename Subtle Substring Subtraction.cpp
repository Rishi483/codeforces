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
  string s;
  cin>>s;
  int n=s.length();
  if(n%2==0){
      int alice=0;
      for(int i=0;i<n;i++){
          alice+=s[i]-96;
      }
      cout<<"Alice "<<alice<<endl;
  }
  else if(n==1){
      cout<<"Bob "<<s[0]-96<<endl;
  }
  else{
      int alice=0;
      int bob=0;
      if(s[0]>s[n-1]){
          
      for(int i=0;i<n-1;i++){
          alice+=s[i]-96;
      }
      bob=s[n-1]-96;
      }
      else{
          for(int i=1;i<n;i++){
              alice+=s[i]-96;
          }
          bob=s[0]-96;
      }
      if(alice>bob){
          cout<<"Alice "<<alice-bob<<endl;
      }
      else{
          cout<<"Bob "<<bob-alice<<endl;
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
