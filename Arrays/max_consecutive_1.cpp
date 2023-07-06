#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}


int max_ones(int arr[],int n)
{
    int res=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count=0;
        else{
            count++;
            res =max(res,count);
        }
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

    int result = max_ones(arr,n);
    cout<<"Result "<<result<<endl;

}