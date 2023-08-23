#include<bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n)
{
    stack<int> st;
    int span;
    st.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(st.empty()==false && st.top()<=arr[i]) st.pop();

        span = st.empty() ? -1 : st.top();
        cout<<span<<" ";
        st.push(arr[i]);
    }
}

int main()
{
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printSpan(arr,n);
    return 0; 
}