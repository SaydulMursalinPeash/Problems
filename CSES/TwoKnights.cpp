#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++){
        long long int count=((i*i*(i*i-1))-8-24-(i-4)*16-16-(i-4)*24-(i-4)*(i-4)*8)/2;
        cout<<count<<endl;
    }
    return 0;
}
