#include<iostream>
using namespace std;

int sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1]){
            return -1;
        }
    }
    return 1;
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

    int result = sorted(arr,n);
    cout<<"result index: "<<result;
}