#include<bits/stdc++.h>
using namespace std;

inline int max(int a, int b){
    return a>b?a:b;
}
int main(){

    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;

    cout<<"Max of two: "<<max(a,b);

    return 0;
}