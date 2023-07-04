#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
    int x =INT16_MIN,pos;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
            pos=i;
        }
        
    }
    return pos;
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

    int large_one = largest(arr,n);
    cout<<"result index: "<<large_one;
}