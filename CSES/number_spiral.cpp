#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        unsigned long long int ans;
        long long int x,y;
        cin>>x>>y;
        if(x>y){
            ans=(x%2==1)?(x-1)*(x-1)+y:(x-1)*(x-1)+x+(x-y);
        }
        else{
            ans=(y%2==0)?(y-1)*(y-1)+x:(y-1)*(y-1)+y+(y-x);

        }
        cout<<ans<<endl;

    } 
    
    
    return 0;
}