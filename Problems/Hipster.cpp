#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b;
    c=(a>b)?b:a;
    d=(a>b)?a:b;
    cout<<c<<" "<<(d-c)/2<<endl;
    return 0;

}