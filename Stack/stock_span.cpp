#include<bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n)
{
    stack<int> st;
    int span;
    st.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++)
    {
        while(st.empty()==false && arr[st.top()]<=arr[i]) st.pop();

        span = st.empty() ? i+1 : i-st.top();
        cout<<span<<" ";
        st.push(i);
    }
}

int main()
{
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printSpan(arr,n);
    return 0; 
}