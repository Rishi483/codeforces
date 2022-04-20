#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"


int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int m,n;
  cin>>m>>n;
  if(m-1==0 && n-1>1){
      cout<<-1<<endl;
  }
  else if(n-1==0 && m-1>1){
      cout<<-1<<endl;
  }
  else{
  int ans=0;
  int a=max(m,n);
  int b=min(m,n);
  ans+=(b-1)*2;
  if((m-n)%2==0){
      ans+=(a-b)*2;
  }
  else{
      ans+=(a-b)*2-1;
  }
  cout<<ans<<endl;
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
	
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	}
	return 0;
}
