#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}
void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
void solve(){
  string s1;
  cin>>s1;
  string s2;
  cin>>s2;
  reverseStr(s2);
  if(s1==s2){
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
