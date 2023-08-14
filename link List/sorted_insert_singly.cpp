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

node *sorted_insert(node *head,int val)
{
    node *temp=new node(val);
    if(head==NULL) return temp;

    if(val<head->data){
        temp->next=head;
        return temp;
    }

    else{
        node *curr=head;
        while(curr->next != NULL && val>curr->next->data) curr=curr->next;

        temp->next=curr->next;
        curr->next=temp;
        return head;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(50);

    head=sorted_insert(head,40);
    printlist(head);
    return 0;
}