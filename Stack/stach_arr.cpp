#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    int *arr;
    int cap,top;

    myStack(int c)
    {
        cap=c;
        arr = new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack is Full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int peek()
    {
         if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        int res=arr[top];
        return res;
    }

    int size()
    {
        return (top+1);
    }

    bool isEmpty()
    {
        return (top==-1);
    }
};

int main()
{
    myStack s(5);
    s.push(2);
    s.push(3);
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}