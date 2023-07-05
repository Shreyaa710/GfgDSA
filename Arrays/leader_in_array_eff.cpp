#include<iostream>
using namespace std;

int* leader(int arr[],int n)
{
    int crr_led=arr[n-1];
    cout<<crr_led<<endl;

    for(int i=n-2;i>=0;i--)
    {
       if(crr_led<arr[i])
       {
        crr_led=arr[i];
        cout<<crr_led<<endl;
       }
    }
    
}

int main()
{
    int n,arr[100],d;
    cout<<"Enter size of an array : ";
    cin>>n;
    cout<<"Enter Elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

   leader(arr,n);
//     cout<<"Result"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<*(result+i)<<endl;
//     }
}