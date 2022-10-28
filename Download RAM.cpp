#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i].first<=k){
            k+=a[i].second;
        }
        else{
            break;
        }
    }
    cout<<k<<"\n";
    return ;
}

int main(){
    long long t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}