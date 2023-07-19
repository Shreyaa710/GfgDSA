#include<iostream>
using namespace std;

int sq_root(int key)
{
    int low=1, high=key, ans=-1;
    while(low<=high)
    {
        int mid=(low + high)/2;
        int sq_r = mid*mid;
        if(sq_r==key)
        return mid;

        else if(sq_r>key)
        high=mid-1;

        else
        low=mid+1;
        ans=mid;
    }
    return ans;
}

int main()
{
    int key;
    
    cout<<"Enter squared value : "<<endl;
    cin>>key;

    cout<<sq_root(key);
}