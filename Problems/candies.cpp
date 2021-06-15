#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        unsigned long long int n;
        cin>>n;

        unsigned long long int sum;
        int j=2;
        while(true){
            sum=(1-pow(2,j))/(1-2);
            if(n%sum==0){
                cout<<(int)(n/sum)<<endl;
                break;
            }
            j++;
        }
    }
    return 0;
}