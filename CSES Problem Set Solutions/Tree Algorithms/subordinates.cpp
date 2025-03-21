#include<bits/stdc++.h>
using namespace std;

int subordinates(int a,unordered_map<int,vector<int>> &mpp,vector<int> &arr){
    if(arr[a]!=-1) return arr[a];
    if (mpp.find(a) == mpp.end()) return 0;
    int sum=0;
    for(auto i:mpp[a]){
        sum=sum+subordinates(i,mpp,arr)+1;
    }
    arr[a]=sum;
    return arr[a];
}
int main(){
    int n;
    cin>>n;
    unordered_map<int,vector<int>> mpp;
    vector<int> arr(n+1,-1);
    for(int i=2;i<n+1;i++){
        int a;
        cin>>a;
        mpp[a].push_back(i);
    }
    
    
    for(int i=1;i<=n;i++){
        int ans=subordinates(i,mpp,arr);
        cout<<ans<<" ";
    }
    

}