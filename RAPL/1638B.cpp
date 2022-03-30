#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        vector<int>  e,o;
        ll a,r=0,m=0,n=0;
        cin>>a;
        for(ll i=0;i<a;i++){
            int b;
            cin>>b;
            if(b%2==0){
                m++;
                e.push_back(b);
                if(m>0){
                    if(e[m-1]>e[m]){
                        r=1;
                    }
                }
            }
            else{
                n++;
                o.push_back(b);
                if(n>0){
                    if(o[n]<o[n-1]){
                        r=1;
                    }
                }
            }
        }
        if(r==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
