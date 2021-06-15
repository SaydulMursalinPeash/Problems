// INTEGER VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.reserve(10);
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    cout<<"Size of the vector is= "<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    
}
