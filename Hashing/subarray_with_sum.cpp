#include<iostream>
#include<unordered_set> 
using namespace std;


bool chk_sum(int arr[],int n1,int sum)
{
    unordered_set<int> s;
    int prefix_sum= 0;
    for(int i=0;i<n1;i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum == sum)
        return true;

        if(s.find(prefix_sum - sum) != s.end())
        return true;

        else
        s.insert(prefix_sum);

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

    cout<<"Enter the value of sum: "<<endl;
    cin>>sum;

    cout<<endl;
    cout<<chk_sum(arr,n1,sum);
}
