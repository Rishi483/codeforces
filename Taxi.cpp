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
  int A[n];
  int hsh[5]{0};
  for(int i=0;i<n;i++){
      cin>>A[i];
      hsh[A[i]]++;
  }
  int ans=0;
  ans+=hsh[4];
  hsh[4]=0;
  if(hsh[3]>hsh[1]){
      ans+=hsh[1];
      hsh[3]-=hsh[1];
      hsh[1]=0;
  }
  else{
      ans+=hsh[3];
      hsh[1]-=hsh[3];
      hsh[3]=0;
  }
  if(hsh[2]%2==0){
      ans+=hsh[2]/2;
      hsh[2]=0;
  }
  else{
      ans+=hsh[2]/2;
      if(hsh[1]>0){
          ans++;
          hsh[1]-=2;
      }
      else{
          ans++;
      }
  }
  if(hsh[1]>0){
      if(hsh[1]%4==0){
          ans+=hsh[1]/4;
      }
      else{
          ans+=hsh[1]/4;
          ans++;
      }
  }
  if(hsh[3]>0){
      ans+=hsh[3];
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
