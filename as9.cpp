#include <bits/stdc++.h>
using namespace std;
int main( ) {
    for(int j=1;j<=500;j++){
        int x=0;
        int i=j;
        while(i>0){
            int m=i%10;
            x=x+m*m*m;
            i=i/10;
        }
        if(j==x){
            cout<<j<<endl;
        } 
    }
}