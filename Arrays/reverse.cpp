#include<iostream>
using namespace std;

int* reverse(int arr[],int n)
{
    int temp;
    for(int i=0, j=n-1;i<n, j>=0;i++, j--)
    {
        if(i>=j){
            break;
        }
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;   
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

    int* result = reverse(arr,n);
    cout<<"result: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(result+i)<<endl;
    }
}