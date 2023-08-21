#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct myStack
{
    node *head;
    int sz;

    void push(int x)
    {
        node *temp =new node(x);
        temp->next=head;
        head=temp;
        sz++;
    }

    int pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MAX;
        }
        int res=head->data;
        node *temp=head;
        head=head->next;
        sz--;
        delete temp;
        return res;
    }

    int peek()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return INT_MAX;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        return (head==NULL);
    }
};

int main()
{
    myStack s;
    s.push(2);
    s.push(3);
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}