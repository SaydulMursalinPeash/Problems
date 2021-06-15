#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int f=((n%m)*a<b)?((n%m)*a):b;
    int c=f+((int)(n/m))*b;
    int d=n*a;
    int e=(c<d)?c:d;
    cout<<e<<endl;
    return 0;
}