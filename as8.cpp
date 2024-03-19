#include <bits/stdc++.h>
using namespace std;
int main( ) {
    cout<<"enter the value";
    int n;
    cin>>n;
    int fibo1=1;
    int fibo2=1;
    cout<<fibo1<<" "<<fibo2<<" ";
    for(int i=3;i<=n;i++){
        int fibo3=fibo1+fibo2;
        cout<<fibo3<<" ";
        fibo1=fibo2;
        fibo2=fibo3;
    }
}