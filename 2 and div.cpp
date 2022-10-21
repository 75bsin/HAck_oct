#include<bits/stdc++.h>
using namespace std;

void read(int a[],int n){
  for(int i=0;i<n;i++){
    if(a[i]!=1){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
  return;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1,n;
  cin>>t;
  while(t--){
  cin>>n;
  int a[n]={0};
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    if(k>=1 && k<=n && a[k-1]==0){
      a[k-1]++;
    }
    else{
    while(1){
      if(k>=1 && k<=n && a[k-1]==0){
        a[k-1]=1;
        break;
      }
      if(k<1){
        break;
      }
      k=(int)k/2;
    }
    }
  }
  /*for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;*/
  read(a,n);
  }
  return 0;
}