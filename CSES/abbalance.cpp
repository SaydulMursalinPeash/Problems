#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int length;
        length=s.size();
        int ab=0,ba=0;
        for(int i=0;i<length;i++){
            if(s[i]=='a'&&s[i+1]=='b'){
                ab++;
            }
            else if(s[i]=='b'&&s[i+1]=='a'){
                ba++;
            }
        }
        if((ab==1&&ba==0)||(ba==1&&ab==0)){
            if(ab==1){
                s[0]='b';
            }
            else{
                s[0]='a';
            }
        }
        else if(ab>ba){
            for(int i=0;i<length;i++){
                if(s[i]=='a'&&s[i+1]=='b'){
                    s[i]='b';
                    break;
                }
            }

        }
        else if(ba>ab){
            for(int i=0;i<length;i++){
                if(s[i]=='b'&&s[i+1]=='a'){
                    s[i]='a';
                    break;
                }
            }
        }
        cout<<s<<endl;


    }
    return 0;
}
