#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    ll res=0;
    ll k=5;
    while((n/k)>0){
        res+=n/k;
        k*=5;
    }
    cout<<res<<endl;
    return 0;
}