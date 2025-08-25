#include<bits/stdc++.h>
using namespace std;


class Employee{
    public:
        int e_id;
        string name;
        int salary;

        void getData(){
            cout<<"Enter Employee name: ";
            getline(cin,name);
            
            cout<<"Enter Employee ID: ";
            cin>>e_id;
            
            cout<<"Enter Employee Salary: ";
            cin>>salary;
            
            cin.ignore();
        }

        void display(){
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee ID: "<<e_id<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }
};

int main(){
    Employee E1,E2,E3;
    E1.getData();
    E1.display();

    E2.getData();
    E2.display();
    
    E3.getData();
    E3.display();

    return 0;
}