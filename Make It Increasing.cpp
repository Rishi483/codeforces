#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int gcd(int a, int b)
{
   return __gcd(a,b);
}
int check(int A[],int n){
    for(int i=1;i<n;i++){
        if(A[i]<=A[i-1]){
            return 0;
        }
    }
    return 1;
}
void solve(){
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
      cin>>A[i];
  }
  if(check(A,n)==1){
      cout<<0<<endl;
      return;
  }
  int ct=0;
  for(int i=n-1;i>=1;i--){
      if(A[i]<=A[i-1]){
          while(A[i]<=A[i-1]){
              if(A[i]==0){
                  cout<<-1<<endl;
              return;
              }
          A[i-1]/=2;
          ct++;
          if(A[i-1]==0 && i!=1){
              cout<<-1<<endl;
              return;
          }
          }
      }
      
  }
  if(check(A,n)==1){
      cout<<ct<<endl;
      return;
  }
  cout<<-1<<endl;
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
