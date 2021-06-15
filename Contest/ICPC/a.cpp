#include<iostream>
using namespace std;
long long GCD(long long x,long long y){
    if(x==0){
        return y;
    }else{
        return GCD(y%x,x);
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b,m,k=0;
        cin>>a>>b>>m;

        for(long long int j=0;j<=m;j++){
            if(GCD(a+j,b+j)==0){
                k++;
            }
        }

        cout<<"Case "<<t+1<<": "<<k<<endl;
    }

    return 0;
}
