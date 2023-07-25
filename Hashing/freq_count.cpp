#include<iostream>
#include<unordered_map> 
using namespace std;

int freq_count(int arr[], int n)
{
    unordered_map<int,int>s;
    for(int i=0;i<n;i++)
    s[arr[i]]++;

    cout<<s.size()<<endl;
    
    for(auto e:s)
    cout<<e.first<<" "<<e.second<<endl;
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
    freq_count(arr,n);

}