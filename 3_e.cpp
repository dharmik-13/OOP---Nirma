#include<bits/stdc++.h>
using namespace std;

double sum(double a, double b){
    return a+b;
}
double sum(double a, double b, double c){
    return a+b+c;
}

int main(){
    cout<<"Sum of two double values: "<<sum(4.4,5.6)<<endl;
    cout<<"Sum of three double values: "<<sum(4.4,5.6,1.2);


    return 0;
}