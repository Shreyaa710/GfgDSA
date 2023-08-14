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
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

node *insert_at_end(node *head,int data){
    node *temp=new node(data);
    if(head==NULL) {
        temp->next=temp;
        return temp;
    }
    else{
        node *curr=head;
        while(curr->next != head) curr=curr->next;

        curr->next=temp;
        temp->next=head;

        return head;
    }
}

int main()
{
    node *head = NULL;
    head = insert_at_end(head,10);
    head = insert_at_end(head,20);
    head = insert_at_end(head,30);
    head = insert_at_end(head,40);

    printlist(head);
    return 0;
}