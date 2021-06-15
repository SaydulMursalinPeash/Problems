#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long a[100000],b[100000];
        for(long long int j=0;j<n;j++){
            cin>>a[j];
            b[n]=a[n];
        }
        


        int c;
        for(long long int j=0;j<n;j++){
            for(long long int k=0;k<n;k++){
                if(a[j]<a[k]){
                    c=a[j];
                    a[j]=a[k];
                    a[k]=c;
                }
            }
        }
        long long int sum=a[0],p=a[0],x=0,y;
        for(int j=1;j<n;j++){
            if((a[j]==a[j-1])||(a[j]==a[j-1]+1)){
                sum+=a[j];
                y=j;
                if(sum>p){
                    p=sum;
                }
            }
            else{
                if(sum>p){
                    p=sum;
                }
                sum=a[j];
                x=j;
            }

        }
        for(int f=0;f<n;f++){
            cout<<a[f]<<"\t";
        }
        cout<<p<<endl;

        cout<<"Case "<<i+1<<": "<<p<<" "<<x<<endl;

    }
    return 0;

}