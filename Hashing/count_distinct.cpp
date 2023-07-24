#include<iostream>
#include<unordered_set> 
using namespace std;

int count_dist(int arr[], int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    
    return s.size();
}

int main()
{
    int n,arr[20];
    cout<<"Enter size of an array : "<<endl;
    cin>>n;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<count_dist(arr,n);

}