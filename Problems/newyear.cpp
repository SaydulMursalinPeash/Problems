#include<iostream>
using namespace std;
int main(){
    long long n,t;
    cin>>n>>t;
    long long int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    long long int count=1;
    while(true){
        //cout<<count<<"\t";
        count+=a[count-1];
        //cout<<count<<"\t";
        if(t==count){
            cout<<"YES"<<endl;
            break;
        }
        if(count>t){
            cout<<"NO"<<endl;
            break;
        }
    }

    return 0;
}