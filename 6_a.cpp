#include<bits/stdc++.h>
using namespace std;




class counter{
    public:
        int count;
        counter(){
            count=0;
        }
        int increase(){
            return ++count;
        }
};

int main(){
    
    counter c1;
    cout<<c1.increase()<<endl;
    cout<<c1.increase()<<endl;
    cout<<c1.increase();
    return 0;
}