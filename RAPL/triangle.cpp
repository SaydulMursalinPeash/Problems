#include<iostream>
#include<math.h>
using namespace std;
#define ll long long long
 int main(){
     float n;
     cin>>n;
     int k=(-1+sqrt(1+8*n))/2;
     float k1=(-1+sqrt(1+8*n))/2;
     if(k==k1){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
     return 0;

 }
