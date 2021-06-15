#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    string a;
    map<string,int> m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(m.count(a)==0){
            cout<<"OK"<<endl;
            m[a]=1;
        }
        else{
            
            cout<<a<<m[a]<<endl;
            m[a]++;
        }
    }
    return 0;

}