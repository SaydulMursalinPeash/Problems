#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        if(i%2!=0&&i%4==3){
            for(int j=0;j<n;j++){
                if(j==0){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
        else if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            for (int j = 0; j < n; j++)
            {
                if (j == n-1)
                {
                    cout << "#" ;
                }
                else
                {
                    cout << ".";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}