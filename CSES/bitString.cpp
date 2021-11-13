#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
unsigned long long int power1(int a,long long int b){
    unsigned long long int n=1;
    for(int i=1;i<=b;i++){
        n=(n*2);
        n=n%M;
        //cout<<n<<"\t";
    }
    return n;
}
int main(){
    unsigned long long int n;
    cin>>n;
    unsigned long long int r=power1(2,n);
    cout<<r<<endl;
    return 0;
}