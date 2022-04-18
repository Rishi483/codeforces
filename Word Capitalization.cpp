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
  char i=s[0];
  string ans;
  ans.push_back(i);
  transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
  for(int i=1;i<s.length();i++){
      ans.push_back(s[i]);
  }
  cout<<ans<<endl;
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
