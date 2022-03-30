#include<iostream>
#include<math.h>
#include<string>
using namespace std;
string binary_converter(int dec,int n){
    int a[10000];
    int i=0;
    string s="";
    if(dec==0){
        a[0]=0;
        i=1;
    }
    else{
        while(dec>=1 ){
            a[i]=dec%2;
            dec=(dec-a[i])/2;
            i++;
        }
    }
    int k=i;
    for(int j=0;j<n-k;j++){
        s+='0';
    }
    for(int j=n-k;j<n;j++){
        s+=(char)(a[i-1]+48);
        i-=1;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int length=pow(2,n);
    for(int i=0;i<length;i++){
        cout<<binary_converter(i,n)<<endl;
    }
    return 0;
}