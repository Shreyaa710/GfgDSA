#include<iostream>
#include<unordered_set> 
using namespace std;

int max(int a,int b)
{
    if(a>b)
    return a;

    else 
    return b;
}

int chk_sum(int arr[],int n1,int sum)
{
    unordered_set<int> s;
    int prefix_sum= 0,res=0,result=0;
    for(int i=0;i<n1;i++)
    {
        prefix_sum += arr[i];
        if(s.find(sum-arr[i]) != s.end())
        {
            result=max(res+1,result);
            s.clear();
            res=0;
        }

        if(prefix_sum < sum)
        {
            res++;
            s.insert(prefix_sum);
        }

        else{
            prefix_sum=0;
            result=0;
        }
    }
    return result;

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
