#include<bits/stdc++.h>
using namespace std;

float area(float radius){
    float a = 3.14*radius*radius;
    return a;
}
int area(int length, int height){
    int a= length*height;
    return a;
}
float area(float height, float base){
    float a = height*base/2;
    return a;
}

int main(){
    int a;

    cout<<"Enter the area you want to find: "<<endl<<"1. Area of circle"<<endl<<"2. Area of rectangle"<<endl<<"3. Area of triangle"<<endl;
    cin>>a;


    switch(a){
        case 1:
            float r;
            cout<<"Enter the radius of the circle: ";
            cin>>r;
            cout<<"Area of the circle is: "<<area(r);
            break;
        case 2:
            int l,h;
            cout<<"Enter the length and height of the rectangle: ";
            cin>>l>>h;
            cout<<"Area of the rectangle is: "<<area(l,h);
            break;
        case 3:
            float t,b;
            cout<<"Enter the height and base of the triangle: ";
            cin>>h>>b;
            cout<<"Area of the triangle is: "<<area(t,b);
            break;
    }

    

    return 0;
}