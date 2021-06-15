#include<iostream>
#include<math.h>
using namespace std;
int co(int a){
    int c=0;
    while(1){
        if(a>=10){
            c++;
            a=a/10;
        }
        else{
            break;
        }
    }
    return c+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        //cout<<co(a)<<endl;
        int c=0;
        int l=co(a);
        for(int i=l;i>3;i--){
            int j=co(a);
            long long a1=2050*(pow(10,l-40));
            cout<<a1<<"\t";
            //c=c+(a/a1);
            a=a%a1;
        }
        cout<<c<<endl;
    }
    return 0;
}
