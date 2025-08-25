 #include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int i=0;
    for(i=0; i<10; i++){
        cout<<"Enter the "<<i<<"th value:";
        cin>>a[i];
    }
            
    cout<<"Array in reverse:"<<endl;

    for(i=9; i>=0; i--){
        cout<<a[i]<<endl;
    }
    return 0;
}