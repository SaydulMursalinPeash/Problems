#include<iostream>
using namespace std;
#define ll long long
 int main(){
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<n/2+1<<endl;
        }
    }

     return 0;
 }
