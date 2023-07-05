#include<iostream>
using namespace std;

int* mov_zeroes(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    return arr;
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

    int* result = mov_zeroes(arr,n);
    cout<<"Result"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(result+i)<<endl;
    }
}