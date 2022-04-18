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
  int un=0;
  for(int i=0;i<s.length();i++){
      if(isupper(s[i])){
          un++;
      }
  }
  if(un>s.length()-un){
      transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  else{
      transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout<<s<<endl;
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
