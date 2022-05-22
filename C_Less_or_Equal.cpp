#include <bits/stdc++.h>
using namespace std;
#define int long long
#define end1 "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void solve(){
 int n,k;
 cin>>n>>k;
 int A[n];
 for(int i=0;i<n;i++){
     cin>>A[i];
 }
 sort(A,A+n);
 if(k==0){
     if(A[0]>1)
     cout<<A[0]-1<<endl;
     else
      cout<<-1<<endl;
 }
 else if(k==n){
     cout<<A[n-1]<<endl;
 }
 else if(A[k-1]==A[k]){
     cout<<-1<<endl;
 }
 else{
     cout<<A[k-1]<<endl;
 }
}

int32_t main() {

        solve();
    
    return 0;
}