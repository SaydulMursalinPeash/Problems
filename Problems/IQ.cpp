#include<iostream>
using namespace std;
int main(){
    int n,a[100],i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=(a[n-1]-a[0])/(n-1);
    //cout<<d<<endl;
    for(int i=0;i<n;i++){
        if(i==0&&(a[1]-a[0]!=d)&&(a[2]-a[1]==d)){
            cout<<1<<endl;
            break;

        }
        else if(i==n-1&&(a[i]-a[i-1]!=d)&&(a[i-1]-a[i-2]==d)){
            cout<<n<<endl;
            break;
        }
        else if(i>=1&&a[i+1]-a[i]!=d&&a[i]-a[i-1]!=d){
            cout<<(i+1)<<endl;
            return 0;
        }
    }

    return 0;
}