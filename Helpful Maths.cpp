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
  int noOfOne=0;
  int noOfTwo=0;
  int noOfThree=0;
  int x=s.length();
  for(int i=0;i<x;i+=2){
      if(s[i]=='1'){
          noOfOne++;
      }
      else if(s[i]=='2'){
          noOfTwo++;
      }
      else if(s[i]=='3'){
          noOfThree++;
      }
  }
  string ans;
  while(noOfOne-- && x>0){
      ans.push_back('1');
      x--;
      if(x>0){
      ans.push_back('+');
      x--;
      }
      
  }
  while(noOfTwo-- && x>0){
      ans.push_back('2');
      x--;
      if(x>0){
      ans.push_back('+');
      x--;
      }
      
  }
   while(noOfThree-- && x>0){
      ans.push_back('3');
      x--;
      if(x>0){
      ans.push_back('+');
      x--;
      }
      
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
