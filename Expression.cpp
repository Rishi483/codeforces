#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  int ans;
  ans=max(a,a+(b+c));
  ans=max(ans,a+(b*c));
  ans=max(ans,a*(b*c));
  ans=max(ans,a*(b+c));
  ans=max(ans,(a+b)*c);
  ans=max(ans,(a*b)+c);
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
