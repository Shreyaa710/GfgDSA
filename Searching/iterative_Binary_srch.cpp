#include<iostream>
using namespace std;

int bSearch(int arr[], int n, int key)
{
    int low=0, high=n-1,mid;
    while(low<=high)
    {
        mid=(low + high)/2;
        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key)
        high=mid-1;

        else
        low=mid+1;
    }
    return -1;
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
    cout<<"Enter value to be searched : "<<endl;
    cin>>key;

    cout<<bSearch( arr,  n,  key);
}