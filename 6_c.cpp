#include<bits/stdc++.h>
using namespace std;

class point{
    public:
        int a;
        point(){}
        point(point& ob){
            a = ob.a;
        }

};
int main(){
    point p1;
    p1.a = 10;
    cout<<"Ob 1: "<<p1.a<<endl;

    point p2(p1);
    cout<<"Ob 2: "<<p2.a;

    return 0;
}