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

void find_middle(node *head){
    if(head==NULL) return;

    node *slow=head, *fast=head;

    while(fast != NULL && fast->next != NULL) 
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<slow->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    printlist(head);
    cout<<endl;
    find_middle(head);
    return 0;
}