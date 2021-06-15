#include<iostream>
using namespace std;
int main(){
    int a[50];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    if(a[0]!=1&&a[1]!=1&&a[2]!=1){
        cout<<a[0]*a[1]*a[2]<<endl;
        
    }
    if(a[0]==1&&a[1]==1&&a[2]==1){
        cout<<3<<endl;
    }
    if(a[0]==1&&a[1]!=1&&a[2]!=1){
        cout<<(a[0]+a[1])*a[2]<<endl;
    }
    if(a[0]==1&&a[1]!=1&&a[2]==1){
        cout<<a[0]+a[1]+a[2]<<endl;
    }
    if((a[0]!=1)&&(a[1]!=1)&&(a[2]==1)){
        cout<<(a[1]+a[2])*a[0]<<endl;
    }
    if(a[0]==1&&a[1]==1&&a[2]!=1){
        cout<<2*a[2]<<endl;
    }
    if(a[0]!=1&&a[1]==1&&a[2]==1){
        cout<<a[0]*2<<endl;
    }
    if(a[0]!=1&&a[1]==1&&a[2]!=1){
        if(a[0]>=a[2]){
            cout<<(a[2]+a[1])*a[0]<<endl;
        }else{
            cout<<(a[0]+a[1])*a[2]<<endl;
        }
    }
    return 0;
}