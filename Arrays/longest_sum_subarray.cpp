#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}


int longest_sum(int arr[],int n)
{
    int res=arr[0];
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        x =max(x+arr[i],arr[i]);
        res=max(res,x);
    }
    return res;
}

int main()
{
    int n,arr[100],key;
    cout<<"Enter size of an array : ";
    cin>>n;
    cout<<"Enter Elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result = longest_sum(arr,n);
    cout<<"Result "<<result<<endl;

}