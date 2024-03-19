#include <bits/stdc++.h>
using namespace std;
int main( ) {
    cout<<"enter the digit";
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int x=n%10;
        sum+=(x%2==0?x:0);
        n=n/10;
    }
    cout<<sum;
}