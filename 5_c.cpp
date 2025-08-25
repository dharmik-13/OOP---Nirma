#include<iostream>
using namespace std;

class book{
    public:
        string title;
        string author;
        int price;

    void getdata(){
        cout<<"Enter title: ";
        getline(cin,title);
        
        cout<<"Enter author name: ";
        getline(cin,author);

        cout<<"Enter price: ";
        cin>>price;
        cin.ignore();
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }

};

int main(){

    book b1,b2;
    b1.getdata();
    b1.display();
    
    b2.getdata();
    b2.display();

    return 0;
}