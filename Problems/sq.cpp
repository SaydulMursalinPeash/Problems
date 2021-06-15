#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[100],F=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        for(int i=0;i<n;i++){
            int j=sqrt(a[i]);
            if(j*j!=a[i]){
                F=1;
                break;
            }
        }
        if(F){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }
    return 0;
}
