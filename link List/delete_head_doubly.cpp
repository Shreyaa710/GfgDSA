#include<iostream> 
using namespace std; 

struct node{
    int data;
    node* prev;
    node* next;
    node(int d){
        data=d;
        prev=NULL;
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

node *delete_doubly(node *head){
    if(head == NULL) return NULL;

    if(head->next == NULL) return NULL;

    else{
        node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

int main() 
{ 
	node *head=new node(10);
	node *temp1=new node(20);
	node *temp2=new node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    printlist(head);
	head=delete_doubly(head);
    cout<<endl;
	printlist(head);
	return 0;
} 
