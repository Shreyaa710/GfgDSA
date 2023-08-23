#include<bits/stdc++.h>
using namespace std;

vector<int> nxt_great(int arr[],int n)
{
    stack<int> st;
    vector<int> v;
    int span;
    st.push(arr[0]);
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(st.empty()==false && st.top()<=arr[i]) st.pop();

        span = st.empty() ? -1 : st.top();
        v.push_back(span);
        st.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    for(int x: nxt_great(arr,n)){
        cout<<x<< " ";   
    }
    return 0; 
}