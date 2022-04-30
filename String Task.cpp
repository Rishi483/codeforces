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
  vector<char> ans;
  int n=s.length();
  for(int i=0;i<n;i++){
      if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' ||  s[i]=='U' || s[i]=='Y' || s[i]=='y'){
          
      }
      else{
          ans.push_back('.');
          ans.push_back(tolower(s[i]));
      }
  }
  for(int i=0;i<ans.size();i++){
      cout<<ans[i];
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
