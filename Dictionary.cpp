#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  string s;
  cin>>s;
  int ans=0;
  int x=s[0]-'a'+1;
  
  for(int i=0;i<26;i++){
      if(s[1]-'a'==i){
          if(s[0]<s[1]){
              ans+=i;
          }
          else{
              ans+=i+1;
          }
      }
      
  }
  cout<<((x-1)*25)+ans<<endl;
  
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
