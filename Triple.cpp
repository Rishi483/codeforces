#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"





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
	 int n;
	 cin>>n;
	 map<int,int> frqmap;
	 for(int i=0;i<n;i++){
	     int x;
	     cin>>x;
	     frqmap[x]++;
	 }
	 bool flag=false;
	 for(auto pair : frqmap){
	     const auto freq = pair.second;
	     const auto elem = pair.first;
	     if(freq>=3){
	         cout<<elem<<endl;
	         flag=true;
	         break;
	     }
	 }
	 if(flag==false){
	     cout<<-1<<endl;
	 }
	}
    }
