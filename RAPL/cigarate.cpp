#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll n,k;
    while(cin>>n>>k){
    ll r=n+n/k;
    int u=n%k;
    ll h=n/k+u;

    while(h>=k){
        r=r+h/k;
        u=h%k;
        h=h/k+u;
    }
    cout<<r<<endl;
    }
    return 0;
}
