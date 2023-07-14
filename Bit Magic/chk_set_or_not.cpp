
#include<iostream>
using namespace std;

// Got it
void isKthSet(int n, int k)
{
    int x = (n>>(k-1));
    if((x&1) != 0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int main()
{
    isKthSet(5,2);
    return 0;
}

