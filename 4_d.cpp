#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};   
    int n;
    cout<<"Enter the number you want to search: ";
    cin>>n;

    int i=0;
    bool t=0;
    for(i;i<10;i++){
        if(a[i]==n){
            t=1;
        }
    }

    if(t==0){
        cout<<"Number not found";
    }
    else{
        cout<<"Number found";
    }

    return 0;
}