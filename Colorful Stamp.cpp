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
  string s;
  cin>>s;
  int B[n]{0};
  int R[n]{0};
 
  int blue=0;
  int red=0;
  for(int i=0;i<n;i++){
      if(s[i]=='R'){
          red++;
      }
      else if(s[i]=='B'){
          blue++;
      }
  }
  for(int i=1;i<n;i++){
     
      if(s[i-1]=='R'){
          R[i]++;
      }
      if(s[i-1]=='B'){
          B[i]++;
      }
       B[i]+=B[i-1];
      R[i]+=R[i-1];
  }
  vector<int> W;
  for(int i=0;i<n;i++){
      if(s[i]=='W'){
          W.push_back(i);
      }
  }
  if(blue==0 && red>0 && W.size()==0){
      cout<<"NO"<<endl;
      return;
  }
  else if(red==0 && blue>0 && W.size()==0){
      cout<<"NO"<<endl;
      return;
  }
  else if(red>0 && blue>0 && W.size()==0){
      cout<<"YES"<<endl;
      return;
  }
  else if(s.length()==1 && W.size()==1){
      cout<<"YES"<<endl;
      return;
  }
  else if(s.length()==1 && W.size()==0){
      cout<<"NO"<<endl;
      return;
  }
  else if(s.length()==2 && W.size()==1){
      cout<<"NO"<<endl;
      return;
  }
  else if(W.size()>0 && (red==0 && blue>0 || red>0 && blue==0)){
      cout<<"NO"<<endl;
      return;
  }
  
  if(B[W[0]]==0 && R[W[0]]>0){
      cout<<"NO"<<endl;
          return;
  }
  else if(R[W[0]]==0 && B[W[0]]>0){
      cout<<"NO"<<endl;
          return;
  }
  
  else if(blue-B[W[W.size()-1]]==0 && red-R[W[W.size()-1]]>0){
      cout<<"NO"<<endl;
          return;
  }
  else if(red-R[W[W.size()-1]]==0 && blue-B[W[W.size()-1]]>0){
      cout<<"NO"<<endl;
      return;
  }
 
  
  for(int i=0;i<W.size()-1;i++){
      if((B[W[i+1]]-B[W[i]]==0 && R[W[i+1]]-R[W[i]]>0) || (R[W[i+1]]-R[W[i]]==0 && B[W[i+1]]-B[W[i]]>0 )){
          cout<<"NO"<<endl;
           return;
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
