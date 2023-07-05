#include<iostream>
using namespace std;

int* freq_count(int arr[],int n)
{
    int count =1,i=1;
    while(i<n)
    {
        while(i<n && arr[i-1]==arr[i])
        {
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<endl;
        count=1;
        i++;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" "<<1;
    }
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

    freq_count(arr,n);
}