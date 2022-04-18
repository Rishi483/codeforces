#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  string s1;
  string s2;
  cin>>s1;
  cin>>s2;
  int flag=0;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  for(int i=0;i<s1.length();i++){
      if(s1[i]<s2[i]){
          flag=-1;
          break;
      }
      else if(s1[i]>s2[i]){
          flag=1;
          break;
      }
  }
  cout<<flag<<endl;
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
