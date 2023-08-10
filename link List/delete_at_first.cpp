#include<iostream>
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

node *del_first(node *head){
    if(head == NULL) return NULL;

    else{
        node *temp=head->next;
        delete head;
        return temp;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    head = del_first(head);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}