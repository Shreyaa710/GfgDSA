#include<iostream>
using namespace std;

int max_diff(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int minValue=arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-minValue);
        minValue=min(minValue,arr[i]);
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

    int result = max_diff(arr,n);
    // cout<<"Result"<<result<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<*(result+i)<<endl;
    // }
}