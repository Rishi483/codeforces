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
  string s1;
  cin>>s1;
  if(s1.length()==1){
      if(s1[0]=='a') cout<<1<<endl;
      else{
          cout<<fixed<<setprecision(0)<<pow(2,s.length())<<endl;
      }
      return;
  }
  int ct=0;
  for(int i=0;i<s1.length();i++){
      if(s1[i]=='a'){
          ct++;
      }
  }
  if(ct>0){
      cout<<-1<<endl;
  }
  else{
      cout<<fixed<<setprecision(0)<<(pow(2,s.length()))<<endl;
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
