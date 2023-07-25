#include<iostream>
#include<unordered_set> 
using namespace std;

int count_dist(int arr[],int arr1[], int n1,int n2)
{
    unordered_set<int>s;
    for(int i=0;i<n2;i++)
    s.insert(arr1[i]);

    for(int i=0;i<n1;i++)
    {
        if(s.find(arr[i]) != s.end())
        cout<<arr[i]<<endl;
    }

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
        cin>>arr[i];
    }
    cout<<endl;
    count_dist(arr,arr1,n1,n2);
}
