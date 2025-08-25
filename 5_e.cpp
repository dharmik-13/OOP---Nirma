#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int DSA,DE,OOP;

    void getdata(){
        cout<<"Enter marks for DSA: ";
        cin>>DSA;

        cout<<"Enter marks for DE: ";
        cin>>DE;

        cout<<"Enter marks for OOP: ";
        cin>>OOP;

        int total = DSA+DE+OOP;
        float avg = total/3.0;

        cout<<"Sum: "<<total<<endl;
        cout<<"Percentage: "<<avg<<"%";

    }
};
int main(){
    Student s1;
    s1.getdata();
    
    return 0;
}