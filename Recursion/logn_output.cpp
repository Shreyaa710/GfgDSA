// It will give result as logn base 2
// because we r dividing fun by 2

#include<iostream>
using namespace std;

int fun(int n)
{
    if(n==1)
    return 0;
    else
    return 1+fun(n/2);
}

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Result: "<<fun(n);
}