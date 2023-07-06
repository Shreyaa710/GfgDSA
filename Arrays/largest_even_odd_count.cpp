#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}


int largest_even_odd_count(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(arr[i])
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

    int result = largest_even_odd_count(arr,n);
    cout<<"Result "<<result<<endl;

}