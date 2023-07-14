
#include<iostream>
using namespace std;

int one_odd(int arr[], int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        res = res^arr[i];
    }
    return res;
}

int main()
{
    int arr[9]={4,4,7,4,7,7,7,8,8};
    cout<<one_odd(arr,9);
    return 0;
}

