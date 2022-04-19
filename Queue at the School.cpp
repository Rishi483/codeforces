#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  while(t--){
     for(int i=0;i<n;i++){
         if(s[i]=='B' && s[i+1]=='G'){
             swap(s[i],s[i+1]);
             i++;
         }
     }
    
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
