#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int l=s.length();
        cout<<"Case #"<<i+1<<": "<<1<<"\t";
        int c=1;
        for(int j=1;j<n;j++){
                if(s[j]>s[j-1]){
                    c++;
                }
                else{
                    c=1;
                }
                cout<<c<<"\t";


        }
        cout<<endl;
    }
    return 0;
}
