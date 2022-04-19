#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n;
  cin>>n;
  map<string, int> count;
//   count.insert({"adba",1});
//   auto it= count.find({"adba"});
//   it->second++;
//   cout<<it->second<<endl;
  while(n--){
      string s;
      cin>>s;
     
      if(count.find(s)!=count.end()){
         auto it=count.find({s});
         it->second++;
         cout<<s<<it->second<<endl;
      }
      else{
      count.insert({s,0});
      cout<<"OK"<<endl;
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
