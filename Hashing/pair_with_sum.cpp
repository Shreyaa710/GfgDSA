#include<iostream>
#include<unordered_set> 
using namespace std;

bool chk_sum(int arr[],int n1, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n1;i++)
    {
        if(s.find(sum-arr[i]) != s.end())
        return true;

        else
        s.insert(arr[i]);
    }
    return false;
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

    cout<<"Enter sum: "<<endl;
    cin>>sum;

    cout<<endl;
    cout<<chk_sum(arr,n1,sum);
}
