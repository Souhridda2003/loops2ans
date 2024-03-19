#include <bits/stdc++.h>
using namespace std;
int main( ) {
    cout<<"enter the digit";
    int n;
    cin>>n;
    // int m=n;
    int x=0;
    while(n>0){
        x=x*10;
        x=x+(n%10);
        n=n/10;
    }
    cout<<x;
}