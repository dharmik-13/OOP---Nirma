#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,m;
   cout<<"Enter number of elements for fist array: ";
   cin>>n;
   cout<<"Enter number of elements for second array: ";
   cin>>m;
    
   int a[n],b[m];

   cout<<"Enter elemnts for first array\n";
   for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<":";
    cin>>a[i];
   }

   cout<<"Enter elements for second array\n";
   for(int i=0;i<n;i++){
    cout<<"Enter "<<i<<":";
    cin>>b[i];
   }

   int c[n+m];

    for(int i=0; i<n; i++){
        c[i]=a[i];
    }
    for(int i=0; i<=m; i++){
        c[n+i]=b[i];
    }

    cout<<"Final Merged array\n";
    for(int i=0; i<n+m; i++){
        cout<<c[i];
        cout<<endl;
    }
    
    return 0;
}