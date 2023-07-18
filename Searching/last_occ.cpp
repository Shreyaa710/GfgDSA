#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key)
{
    int low=0, high=n-1,mid;
    while(low<=high)
    {
        mid=(low + high)/2;
        if(arr[mid]<key)
        low=mid+1;

        else if(arr[mid]>key)
        high=mid-1;

        else
        {
            if(mid==n-1 || arr[mid] != arr[mid+1])
            return mid;

            else
            low=mid+1;
        }
        
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

    cout<<first_occ( arr,  n,  key);
}