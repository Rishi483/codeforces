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
  int n=s.length();
  int cta=0;
  int ctb=0;
   if(n==1){
       cout<<"NO"<<endl;
       return;
   }
   if(s[n-1]!=s[n-2]){
       cout<<"NO"<<endl;
       return;
   }
   for(int i=0;i<n-1;i++){
       if(s[i]=='a'){
           cta++;
           if(s[i+1]=='b'){
               if(cta==1){
                   cout<<"NO"<<endl;
                   return;
               }
               cta=0;
           }
       }
       else if(s[i]=='b'){
           ctb++;
           if(s[i+1]=='a'){
               if(ctb==1){
                   cout<<"NO"<<endl;
                   return;
               }
               ctb=0;
           }
       }
   }
   cout<<"YES"<<endl;
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
