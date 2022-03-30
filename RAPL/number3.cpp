#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll n,a,b,c;
    cin>>n;
    if(n%3==0){
        if(n%9==0){
            a=n/3-2;
            b=n/3+1;
            c=n/3+1;
        }
        else{
            a=n/3;
            b=n/3;
            c=n/3;
        }
    }
    else{
            a=1;
            b=1;
            if((n-2)%3==0){
                b=b+1;
                c=n-3;
            }
            else{
                c=n-2;
            }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
