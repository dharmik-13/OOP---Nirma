#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;

    cout<<"Select the choice: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
    cin>>n;

    cout<<"Enter Two numbers for the selected operation: ";
    cin>>a>>b;

    switch(n){
        case 1:
            cout<<"Addition of "<<a<<" and "<<b<<":"<<a+b;
            break;  
        case 2:
            cout<<"Subtraction of "<<a<<" and "<<b<<":"<<a-b;
            break;
        case 3:
            cout<<"Multiplication of "<<a<<" and "<<b<<":"<<a*b;
            break;
        case 4:
            cout<<"Divion of "<<a<<" and "<<b<<":"<<a/b;
            break;
        case 5:
            break;
        default:
            cout<<"Enter a valid choice";
            break;
    }


    return 0;
}