#include<iostream>
#define ll unsigned long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll r=0;
    if(n%2==0){
        if(k>(n/2)){
            k=k-n/2;
            r=k*2;
        }
        else{
            r=k*2-1;
        }
    }
    else{
        if(k>(n/2+1)){
            k=k-n/2-1;
            r=k*2;
        }
        else{
            r=k*2 -1;
        }
    }
    cout<<r<<endl;
    return 0;
}
