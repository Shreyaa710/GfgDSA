#include<iostream>
using namespace std;

int prefix_sum(int arr[],int n)
{
    int ps[n];
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];
    }

}

int main()
{
    int n,arr[100],l,r;
    cout<<"Enter size of an array : ";
    cin>>n;
    cout<<"Enter Elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter starting index: "<<endl;
    cin>>l;

    cout<<"Enter ending index: "<<endl;
    cin>>r;

    int result = prefix_sum(arr,n);
    cout<<"result index: "<<result;
}