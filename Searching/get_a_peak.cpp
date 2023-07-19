#include<iostream>
using namespace std;


int get_a_peak(int arr[], int n)
{
    int low=0, high=n-1, mid;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0 || arr[mid-1]<arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
        return mid;

        else if(mid>0 || arr[mid-1]>=arr[mid])
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

    cout<<get_a_peak(arr,n);
}