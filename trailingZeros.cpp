#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0;
    while(n!=0){
        n=n/5;
        sum+=n;
    }
    cout<<sum;
}