#include<iostream>
using namespace std;


int main(){
    long long int n;
    long long int a[10002] = {11};
    cin>>n;
    a[0]=0;
    a[2]=1;
    a[1]=0;
    a[3]=1;
    for(long long int i=4;i<n;i=i+2){
        a[i]=0;
    }
    for(long long int i=3;i*i<n;i=i+2){
        if(a[i]!=0){
            for(long long int j=2;i*j<n;j++){
                a[i*j]=0;
            }
        }
    }
    for(int i=1;i<n;i++){

            if(a[i]!=0){
                cout<<i<<"\t";
            }

    }
    return 0;
}
