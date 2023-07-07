#include<iostream>
using namespace std;

bool equillibrium(int arr[],int n)
{
    int r=0,l=0;
    for(int i=0;i<n;i++)
    {
        r += arr[i];
    }

    for(int i=0;i<n;i++){
        r -= arr[i];
        if(l==r){
            return true;
        }
        l +=arr[i];
    }
    return false;
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

    bool result = equillibrium(arr,n);
    cout<<"result : "<<result;
}