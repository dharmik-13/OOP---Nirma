#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,m=1;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++){
        m = i*m;
    }

    cout<<"Factorial of "<<n<<":"<<m;

    return 0;
}