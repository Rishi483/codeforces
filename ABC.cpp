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
  string s;
  cin>>s;
  int one=0;
  int zero=0;
  if(s.length()==1){
      yes;
      return;
  }
  for(int i=0;i<n;i++){
      if(s[i]=='1'){
          one++;
      }
      else if(s[i]=='0'){
          zero++;
      }
  }
  if(s.length()==2){
      if(one==zero){
          yes;
          return;
      }
      else{
          no;
          return;
      }
  }
  no;
  
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
