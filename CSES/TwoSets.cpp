#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n%2==0){
        if((n/2)%2==0){
            //cout<<"YES"<<endl;
            long long int total=(n*(n+1))/2;
        if(total%2==0){
            total=total/2;
            long long int a[n],b[n],i=0,j=0;
            for(int k=n;k>0;k--){
                if(k<=total){
                    a[i]=k;
                    total=total-k;
                    i++;
                    continue;
                }
                else{
                    b[j]=k;
                    j++;
                }

            }
            cout<<"YES"<<endl<<i<<endl;
            for(int k=0;k<i;k++){
                cout<<a[k]<<"\t";
            }
            cout<<endl<<j<<endl;
            for(int k=0;k<j;k++){
                cout<<b[k]<<"\t";
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            long long int total=(n*(n+1))/2;
        if(total%2==0){
            total=total/2;
            long long int a[n],b[n],i=0,j=0;
            for(int k=n;k>0;k--){
                if(k<=total){
                    a[i]=k;
                    total=total-k;
                    i++;
                    continue;
                }
                else{
                    b[j]=k;
                    j++;
                }

            }
            cout<<"YES"<<endl<<i<<endl;
            for(int k=0;k<i;k++){
                cout<<a[k]<<"\t";
            }
            cout<<endl<<j<<endl;
            for(int k=0;k<j;k++){
                cout<<b[k]<<"\t";
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
    else{
        long long int total=(n*(n+1))/2;
        if(total%2==0){
            total=total/2;
            long long int a[n],b[n],i=0,j=0;
            for(int k=n;k>0;k--){
                if(k<=total){
                    a[i]=k;
                    total=total-k;
                    i++;
                    continue;
                }
                else{
                    b[j]=k;
                    j++;
                }

            }
            cout<<"YES"<<endl<<i<<endl;
            for(int k=0;k<i;k++){
                cout<<a[k]<<"\t";
            }
            cout<<endl<<j<<endl;
            for(int k=0;k<j;k++){
                cout<<b[k]<<"\t";
            }
            cout<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}