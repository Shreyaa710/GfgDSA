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

node *insert_at_begin(node *head,int data){
    node *temp=new node(data);
    temp->next=head;

    if(head != NULL) head->prev=temp;

    return temp;
   
}

int main()
{
    node *head = NULL;
    head = insert_at_begin(head,10);
    head = insert_at_begin(head,20);
    head = insert_at_begin(head,30);

    head = insert_at_begin(head,40);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}