#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"Value of a after swap: "<<a<<"\n";
    cout<<"Value of b after swap: "<<b;
    
    return 0;
}