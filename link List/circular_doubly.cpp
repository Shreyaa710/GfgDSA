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

void printlist(node *head){
    if(head==NULL)return;
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

node *insert_begin(node *head,int val)
{
    node *temp= new node(val);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }

    else{
        temp->prev=head->prev;
        temp->next=head;
        head->prev->next=head->prev;
        head->prev=temp;
        return temp;
    }
}

int main() 
{ 
	node *head=new node(10);
	node *temp1=new node(20);
	node *temp2=new node(30);
	head->next=temp1;
	temp1->next=temp2;
	temp2->next=head;
	temp2->prev=temp1;
	temp1->prev=head;
	head->prev=temp2;
	head=insert_begin(head,5);
	printlist(head);
	return 0;
} 