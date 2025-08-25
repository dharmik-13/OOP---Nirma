#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;

    cout<<"Enter a number: ";
    cin>>a;

    if(a==0){
        cout<<a<<" is zero";
    }
    else if(a>0){
        cout<<a<<" is positive";
    }
    else{
        cout<<a<<" is negative";
    }
    return 0;
}

