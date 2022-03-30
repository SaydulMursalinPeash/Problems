#include<iostream>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    for(int k=0;k<n;k++){
        ll a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                if(a[i]>=a[j])
                {
                    int d=a[i];
                    a[i]=a[j];
                    a[j]=d;
                }
            }
        }
        if(a[0]+a[1]>a[2]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}