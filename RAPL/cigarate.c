#include<iostream>
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    ll h=n/k;
    ll r=n+h;
    while(h>=k){
        r=r+h/k;
        h=h/k;
    }
    cout<<r<<endl;
    return 0;
}
