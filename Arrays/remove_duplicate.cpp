#include<iostream>
using namespace std;

int remDup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1] != arr[i]){
            arr[res]=arr[i];
            res++;
        }
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

    int result = remDup(arr,n);
    cout<<"result : "<<result;
}