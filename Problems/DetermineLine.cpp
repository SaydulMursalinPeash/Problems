#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int s[101][101];
    int b[101];
    cin>>n;
    for(int i=0;i<=100;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>s[i][0];
        for(int j=1;j<=s[i][0];j++){
            cin>>s[i][j];
            b[s[i][j]]++;
        }
    }
    
    for(int i=0;i<=100;i++){
        if(b[i]==n){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}