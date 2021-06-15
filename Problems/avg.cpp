#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        long long a[2000];
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }


        for(int j=0;j<n;j++){
            if((a[j]+a[j+1])%2==0){
                continue;
            }
            for(int k=j+1;k<n;k++){
                if((a[j]+a[k])%2==0)
                {
                    long long int c=a[j+1];
                    a[j+1]=a[k];
                    a[k]=c;
                    break;
                }
            }
        }
        for(int j=0;j<n;j++){
            cout<<a[j]<<"\t";
        }
        cout<<endl;

    }
    return 0;
}
