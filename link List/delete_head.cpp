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

node *del_first(node *head){
    if(head == NULL) return NULL;

    if(head->next==head){
        delete head;
        return NULL;
    }

    else{
        node *curr=head;
        while(curr->next !=head) curr=curr->next;

        curr->next=head->next;
        delete head;

        return (curr->next);
    }
}

int main()
{
    node *head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
	head->next->next->next->next=head;

    head = del_first(head);
    printlist(head);
   
    return 0;
}