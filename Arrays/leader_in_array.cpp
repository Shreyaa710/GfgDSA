#include<iostream>
using namespace std;

int* leader(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]< arr[j]){
                flag=false;
                break;
            }
        
        }
        if(flag){
            cout<<arr[i]<<endl;
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