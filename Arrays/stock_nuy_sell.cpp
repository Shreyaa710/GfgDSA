#include<iostream>
using namespace std;

int stock_buy_sell(int arr[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]){
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    return profit;
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

    int result = stock_buy_sell(arr,n);
    cout<<"Result "<<result<<endl;

}