#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=0;
    for(int i=1;i<n;i++){

        int a;
        cin>>a;
        num=num+i-a;
    }
    cout<<num+n;
}