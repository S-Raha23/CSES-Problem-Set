#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;//getting input
    int sum=0;

    //using math we can get to solution
    while(n!=0){
        n=n/5;
        sum+=n;
    }
    cout<<sum;
}
