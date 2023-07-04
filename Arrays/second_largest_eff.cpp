#include<iostream>
using namespace std;

int second_largest(int arr[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
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

    int result = second_largest(arr,n);
    cout<<"result index: "<<result;
}