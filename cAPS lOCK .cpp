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
  bool ck=true;
  if(islower(s[0])){
  for(int i=1;i<s.length();i++){
      if(isupper(s[i])){
          
      }
      else{
          ck=false;
          break;
      }
  }
  
  if(ck==true){
  string ans;
  ans.push_back(toupper(s[0]));
  for(int i=1;i<s.length();i++){
      ans.push_back(tolower(s[i]));
  }
  cout<<ans<<endl;
  }
  
  else{
      cout<<s<<endl;
  }
  }
  else if(isupper(s[0])){
      string a;
      for(int i=0;i<s.length();i++){
          a.push_back(tolower(s[i]));
      }
      bool fk=true;
      for(int i=1;i<s.length();i++){
      if(isupper(s[i])){
          
      }
      else{
          fk=false;
          break;
      }
  }
     if(fk==true){
      cout<<a<<endl;
     }
     else{
         cout<<s<<endl;
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
	
	    solve();
	
	return 0;
}
