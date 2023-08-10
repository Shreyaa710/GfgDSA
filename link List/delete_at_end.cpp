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

node *del_end(node *head){
    if(head == NULL) return NULL;

    if(head->next = NULL)
    {
        delete head;
        return NULL;
    }

    node *curr=head;
    while(curr->next->next != NULL){
        curr=curr->next;
    }

    delete (curr->next);
    curr->next=NULL;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    head = del_end(head);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}