#include<iostream>
#include<vector>
using namespace std;


int main(){
    long long int n;

    //long long int a[10002] = {11};
    cin>>n;
    vector <int> A(n, 11);


    A[0]=0;
    A[2]=1;
    A[1]=0;
    A[3]=1;
    for(long long int i=4;i<n;i=i+2){
        A[i] = 0;
    }
    for(long long int i=3;i*i<n;i=i+2){
        if(A[i]!=0){
            for(long long int j=2;i*j<n;j++){
                A[i*j]=0;
            }
        }
    }
    for(int i=1;i<n;i++){

            if(A[i]!=0){
                cout<<i<<"\t";
            }

    }
    return 0;
}
