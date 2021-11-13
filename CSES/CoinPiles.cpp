#include<iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll a,b;
        cin>>a>>b;
        if((a+b)%3==0){
            if((a>b&&(b*2>=a))||(b>a&&(a*2>=b))||(a==b)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}