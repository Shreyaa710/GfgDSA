#include<iostream>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data=x;
        prev=next=NULL;
    }
};

node *insert_at_end(node *head,int data){
    node *temp=new node(data);

    if(head==NULL) return temp;
    node *curr=head;
    while(curr->next != NULL) curr=curr->next;

    curr->next=temp;
    temp->prev=curr;

    return head;
}

int main()
{
    node *head = NULL;
    head = insert_at_end(head,10);
    head = insert_at_end(head,20);
    head = insert_at_end(head,30);

    head = insert_at_end(head,40);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}