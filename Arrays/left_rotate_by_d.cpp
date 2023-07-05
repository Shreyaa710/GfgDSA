#include<iostream>
using namespace std;

int* left_rotate(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    return arr;
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

    cout<<"how many D places: "<<endl;
    cin>>d;

    int* result = left_rotate(arr,n,d);
    cout<<"Result"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(result+i)<<endl;
    }
}