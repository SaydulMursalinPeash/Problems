#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unsigned long long int s,h,m;
        cin>>s>>m>>h;
        long double c=(1/12)/pow(10,10);
        int s_d=s*pow(10,-10)/12;
        int m_d=m*pow(10,-10)/12;
        int h_d=h*pow(10,-10)/12;
        cout<<s_d<<"\t"<<m_d<<"\t"<<h_d<<"\t"<<c<<endl;

    }
    return 0;
}
