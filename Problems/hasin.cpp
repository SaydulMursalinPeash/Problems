#include<iostream>
using namespace std;
int primee(int x,int y){
    int a=x-1;
    if(a<2){
        return 0;
    }
    else if(y%a!=0){
        primee(a,y);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    if(primee(n,n)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
