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

void find_n_last(node *head,int pos){
    if(head==NULL) return;

    node *slow=head, *fast=head;

    for(int i=0;i<pos;i++) fast=fast->next;

    while(fast != NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<slow->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);

    printlist(head);
    cout<<endl;
    find_n_last(head,2);
    return 0;
}