#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    bool i=a%2;

    switch(i){
        case 0:
            cout<<"Even";
            break;
        case 1:
            cout<<"Odd";
            break;
            
    }

    return 0;
}