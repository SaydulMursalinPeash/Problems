#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t,n,q;
    cin>>t>>n>>q;
    while(t-- !=0){
    vector<ll> aa;
    
    cout<<"1 2 3"<<endl;
    
    ll size=3;
    ll pp;
    cin>>pp;
    if(pp==2){
        aa.push_back(1);
        aa.push_back(2);
        aa.push_back(3);
        
    }
    else if(pp==3){
        aa.push_back(1);
        aa.push_back(3);
        aa.push_back(2);
    }
    else{
        aa.push_back(2);
        aa.push_back(1);
        aa.push_back(3);
    }
    for(ll i=4;i<=(n);i++){
        ll u=0;
        ll v=size-1;
        while(u<v){
            ll mid=u+((v-u)/2);
            cout<<aa[mid]<<" "<<aa[mid+1]<<" "<<(i)<<endl;
            cin>>pp;
            if(pp==aa[mid]){
                v=mid;
            }
            else if(pp==aa[mid+1]){
                
                u=mid+1;
            }
            else{
                aa.insert(aa.begin()+mid+1,i);
                size++;
                break;
            }
        }
        if(size!=i){
            if(u==0){
                aa.insert(aa.begin(),i);
            }
            else{
                aa.push_back(i);
            }
            size++;
        }
    }
    for(auto zzz: aa){
        cout<<zzz<<" ";
    }
    cout<<endl;
    cin>>pp;
    if(pp==-1){
        break;
    }
}
}
