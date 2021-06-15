#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n;
    long long int a[100000];
    int v[4]={2,3,5,7};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(long long int i=0;i<n;i++){
        if(a[i]<=2){
            cout<<"NO"<<endl;
        }
        else if((sqrt(a[i]))==((int)sqrt(a[i]))){
            int c=0;
            long long int r=sqrt(a[i]),d=sqrt(a[i]);

            for(long long int j=2;j<d;j++){
                if(r%j==0){
                    c=1;
                    break;
                }
                else{
                    d=(r/j)+1;
                }

            }
            if(c==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}