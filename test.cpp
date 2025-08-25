#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cout<<"Enter number: ";
    cin>>n;


    if(n>0){
        a=1;
    }
    else if(n==0){
        a=2;
    }
    else{
        a=3;
    }

    switch(a){
        case 1:
            cout<<"Number is Positive";
            break;
        case 2:
            cout<<"Number is Zero";
            break;
        case 3:
            cout<<"Number is Negative";
            break;
    }
}