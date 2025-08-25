#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1;
    int y;
    while(i<=50){
        y = i%3;
        if(y==0){
           i++;
           continue;
        }       
        cout<<i<<"\n";               
        i++;
    }

    return 0;
}