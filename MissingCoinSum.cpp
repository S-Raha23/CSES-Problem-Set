#include<bits/stdc++.h>
using namespace std;


//1 2 2 7 9

int solve(vector<int> v){
    if(v[0]!=1) return 1;
}
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int b=solve(v);
}