#include<iostream>
using namespace std;

int sum_in_pair(int arr[],int n, int x)
{
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
        return 1;

        else if(arr[i]+arr[j]<x)
        i++;

        else
        j--;
    }
    return 0;
}

int main()
{
    int arr[20],n,key;
    cout<<"Enter the no. of elements in array: "<<endl;
    cin>>n;
    cout<<"Enter elements of an array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value of sum : "<<endl;
    cin>>key;

    cout<<sum_in_pair(arr,n,key);
}