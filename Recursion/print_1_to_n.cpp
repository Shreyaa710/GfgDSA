
#include<iostream>
using namespace std;

int print(int n)
{
    if(n==0)
    return 0;

    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    print(n);
}