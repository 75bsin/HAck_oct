#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t,n;
  cin>>t;
  while(t--){
    cin>>n;
    long long mi=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    for(long long i=0;i<n;i++){
      long long k;
      cin>>k;
      mi=min(mi,k);
      mx=max(mx,k);
    }
    cout<<mx-mi<<"\n";
  }
  return 0;
}