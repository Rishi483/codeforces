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
  for(int i=0;i<s.length();i++){
      if(s[i]=='h' && ans==0){
          ans++;
      }
      else if(s[i]=='e' && ans==1){
          ans++;
      }
      else if(s[i]=='l' && ans==2){
          ans++;
      }
     else if(s[i]=='l' && ans==3){
          ans++;
      }
      else if(s[i]=='o' && ans==4){
          ans++;
      }
  }
  if(ans==5){
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
