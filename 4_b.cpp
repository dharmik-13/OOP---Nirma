#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={100,20,12,30,55,34,1};
    int i,j;
    

    for(i=1; i<=3; i++){
       for(j=0; j<7; j++){
        if(a[j]>a[j+1]){
            int t;
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
        }
    }
    cout<<a[5];
    return 0;
}