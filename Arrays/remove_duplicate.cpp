#include<iostream>
using namespace std;

int unique(int arr[],int n)
{
    
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

    int result = unique(arr,n);
    cout<<"result index: "<<result;
}