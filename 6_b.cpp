#include<bits/stdc++.h>
using namespace std;

class box{
    int length;
    int breadth;
    int height;
    public: 

        box(int l, int b, int h){
            length = l;
            breadth = b;
            height = h;
        }
        int volume(){
            return length*breadth*height;
        }
};


int main(){
    box b1(1,2,3);
    cout<<"Volume of a box: "<<b1.volume();
    return 0;
}