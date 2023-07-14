//unsigned int ranges from 0 to 2^32-1
//Signed int ranges from 2^-31 to 2^31-1

#include<iostream>
using namespace std;

int main()
{
    int x=1;
    cout<<(~x)<<endl;
    x=5;
    cout<<(~x)<<endl;
    return 0;
}