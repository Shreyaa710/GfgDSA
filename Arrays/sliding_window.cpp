#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

int sliding_window(int arr[],int n,int k)
{
    int curr=0;
    for(int i=0;i<k;i++){
        curr += arr[i];
    }
    int res=curr;
    for(int i=0;i<n-k;i++){
        curr= curr+arr[k+i] -arr[i];
        res=max(res,curr);
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
    cout<<"Enter the key for sliding: "<<endl;
    cin>>key;

    int result = sliding_window(arr,n,key);
    cout<<"result index: "<<result;
}