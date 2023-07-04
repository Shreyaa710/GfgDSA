#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
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

    cout<<"Element to be found : ";
    cin>>key;
    int result = search(arr,n,key);
    cout<<result;
}