#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

int gcd(int a, int b)
{
   return __gcd(a,b);
}

void solve(){
  int n,l;
  cin>>n>>l;
  vector<string> v;
  for(int i=0;i<n;i++){
      string s;
      cin>>s;
      v.pb(s);
  }
  int mn=INT_MAX;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          int sum=0;
          for(int k=0;k<l;k++){
              
              string s1=v[i];
              string s2=v[j];
              sum+=abs(s1[k]-s2[k]);
          }
          if(mn>sum){
              mn=sum;
          }
      }
  }
  cout<<mn<<endl;
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
