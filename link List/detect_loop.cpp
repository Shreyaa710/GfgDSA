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


bool isLoop(node *head)
{
    node *temp = new node(0);
    node *curr=head;
    while(curr != NULL)
    {
        if(curr->next==temp) return true;

        if(curr->next == NULL) return false;

        node *curr_new = curr->next;
        curr->next=temp;
        curr=curr_new;

    }
    return false;
}


int main() 
{ 
	node *head=new node(15);
	head->next=new node(10);
	head->next->next=new node(12);
	head->next->next->next=new node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
} 