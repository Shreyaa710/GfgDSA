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

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

node *reverse_singly(node *head)
{
    if(head==NULL) return NULL;

    node *curr=head, *prev=NULL;

    while(curr != NULL)
    {
        node *avi=curr->next;
        curr->next=prev;
        prev=curr;
        curr=avi;
    }
    return prev;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    printlist(head);
    cout<<endl;
    head=reverse_singly(head);
    printlist(head);
    return 0;
}