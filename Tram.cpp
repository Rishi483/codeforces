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
 int max=0;
 int sum=0;
 while(n--){
     int a,b;
     cin>>a>>b;
     sum+=b;
     sum-=a;
     if(sum>=max){
         max=sum;
     }
 }
 cout<<max<<endl;
  
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
