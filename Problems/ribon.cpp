#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[3],r=0;
    cin>>n>>a[0]>>a[1]>>a[2];
    for(int i=0;i<(n/a[2])+1;i++){
        if(a[2]*i>n) break;
        for(int j=0;j<(n/a[1])+1;j++){
            if(j*a[1]+i*a[2]>n) break;
            if((n-i*a[2]-j*a[1])%a[0]==0){
                r = max(r, (((n - i * a[2] - j * a[1]) /a[0])+i+j));
            }
        }
    }
    cout<<r<<endl;
    

    return 0;
}      
