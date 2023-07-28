#include<iostream>
#include<unordered_map> 
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
    unordered_map<int,int> s;
    int prefix_sum= 0,res=0;

    for(int i=0;i<n1;i++)
    {
        if(arr[i]==0)
        arr[i]=-1;
    }


    for(int i=0;i<n1;i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum == 0)
        res=i+1;

        if(s.find(prefix_sum) == s.end())
        s.insert({prefix_sum, i});

        if(s.find(prefix_sum) != s.end())
        res= max(res, i- s[prefix_sum]);
    }
    return res;

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
    cout<<chk_sum(arr,n1,sum);
}
