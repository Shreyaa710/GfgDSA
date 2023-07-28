#include<iostream>
#include<unordered_set> 
using namespace std;

int union_12(int arr[],int arr1[], int n1,int n2)
{
    unordered_set<int>s(arr, arr+n1);
    for(int i=0;i<n2;i++)
    {
        s.insert(arr1[i]);
    }
    return s.size();

}

int main()
{
    int n1,n2,arr[20],arr1[20];
    cout<<"Enter size of an array : "<<endl;
    cin>>n1;
    cout<<"Enter elements of first array : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter size of an array : "<<endl;
    cin>>n2;
    cout<<"Enter elements of second array : "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<union_12(arr,arr1,n1,n2);
}
