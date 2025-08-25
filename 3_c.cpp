#include<bits/stdc++.h>
using namespace std;

int display(int a){
    return a;
}
float display(float a){
    return a;
}
string display(string a){
    return a;
}
int main(){

    int a;
    cout<<"Enter the integer value: ";
    cin>>a;

    float b;
    cout<<"Enter the float value: ";
    cin>>b; 

    string c;
    cout<<"Enter the string value: ";
    cin>>c; 


    cout<<"Integer Value: "<<display(a)<<endl;
    cout<<"Float Value: "<<display(b)<<endl;
    cout<<"String Value: "<<display(c);

    return 0;
}