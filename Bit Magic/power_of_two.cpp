
#include<iostream>
using namespace std;

bool pow_eff(int n)
{
    if(n==0) return false;
    else return ((n&(n-1)) == 0);
}


int main()
{
    cout<<pow_eff(16);
}

