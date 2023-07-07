#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

bool subarray_sum_given(int arr[],int n,int k)
{
   int s=0,curr=0;
   for(int i=0;i<n;i++){
    curr+=arr[i];
    while(k<curr){
        curr -= arr[s];
        s++;
    }
    if(k==curr){
        return true;
    }
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
    cout<<"Enter the sum of subarray : "<<endl;
    cin>>key;

    bool result = subarray_sum_given(arr,n,key);
    cout<<"result : "<<result;
}