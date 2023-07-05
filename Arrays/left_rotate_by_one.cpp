#include<iostream>
using namespace std;

int* left_rotate(int arr[],int n)
{
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=x;
    return arr;
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

    int* result = left_rotate(arr,n);
    cout<<"Result"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(result+i)<<endl;
    }
}