#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int q[10000000];
	q[0]=1;
	q[1]=1;

	for(long long i=2;i*i<=10000000;i++){
		if(q[i]==0){
			for(long long j=2;i*j<=10000000;j++){
			q[i*j]=1;
		}
		}
	}
    long long n,b;
    cin>>n;
    for(long long int i=0;i<n;i++){
        cin>>b;
        long long r=sqrt(b);
        if((r*r)==b&&a[r]==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}