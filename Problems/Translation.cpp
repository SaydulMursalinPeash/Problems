#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s,t,t2;
    cin>>s;
    cin>>t;
    int n1,n2;
    n1=s.length();
    n2=t.length();
    if(n1==n2){
        for(int i=0;i<n1;i++){
            s[i]=tolower(s[i]);
            t[i]=tolower(t[i]);
            if (t[n1 - 1 - i] != s[i])
            {
                cout << "NO" << endl;
                return 0;
            }
            else{
                continue;
            }
        }
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}