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
  string s;
  cin>>s;
  int n=s.length();
  int A[n]{0};
  int B[n]{0};
  
  for(int i=1;i<n;i++){
      if(s[i-1]=='A'){
          A[i]++;
      }
      else{
          B[i]++;
      }
      if(s[i]=='A'){
          A[i]++;
      }
      else{
          B[i]++;
      }
      A[i]+=A[i-1];
      B[i]+=B[i-1];
  }
  
  if(n==1){
      no;
      return;
  }
  if(s[0]=='B'){
      no;
      return;
  }
  if(s[n-1]=='A'){
      no;
      return;
  }
  for(int i=0;i<n;i++){
      if(s[i]=='B'){
          if(B[i]>A[i]){
              no;
              return;
          }
      }
  }
  yes;
  
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
