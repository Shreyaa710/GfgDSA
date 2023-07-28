#include<iostream>
#include<unordered_set> 
using namespace std;

int chk_sum(int arr[],int n1)
{
    unordered_set<int> s;
    int prefix_sum=0;
    for(int i=0;i<n1;i++)
    {
        prefix_sum += arr[i];
        if(s.find(prefix_sum) != s.end())
        return 1;

        else
        s.insert(prefix_sum);
    }
    return 0;
}

int main()
{
    int n1,arr[20],sum;
    cout<<"Enter size of an array : "<<endl;
    cin>>n1;
    cout<<"Enter elements of first array : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    cout<<chk_sum(arr,n1);
}
