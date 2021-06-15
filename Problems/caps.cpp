#include<iostream>
#include<ctype.h>
#include<string>
using namespace  std;
int check(string a){
    int l=a.length();
    string c=a;
    string b=a;
    for(int i=0;i<l;i++){
        c[i]=toupper(a[i]);
        if(i==0){
            a[i]=tolower(a[i]);
        }
        else{
            a[i]=toupper(a[i]);
        }
    }
    if(a.compare(b)==0){
        return 0;
    }
    else if(b.compare(c)==0){
        
        return 1;
    }
    else{
        return 2;
    }

}
int main(){
    string a;
    cin>>a;
    int l=a.length();
    if(check(a)==0){
        for (int i = 0; i < l; i++)
        {
            if (i == 0)
            {
                a[i] = toupper(a[i]);
            }
            else
            {
                a[i] = tolower(a[i]);
            }
        }
    }
    else if(check(a)==1){
        for(int i=0;i<l;i++){
            a[i] = tolower(a[i]);
        }
    }
    cout<<a<<endl;
    return 0;
}