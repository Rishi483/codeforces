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
  int A[26]{0};
  for(int i=0;i<s.length();i++){
      A[s[i]-97]=1;
  }
  int num=0;
  for(int i=0;i<26;i++){
      if(A[i]==1){
          num++;
      }
  }
  if(num%2==0){
      cout<<"CHAT WITH HER!"<<endl;
  }
  else{
      cout<<"IGNORE HIM!"<<endl;
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
