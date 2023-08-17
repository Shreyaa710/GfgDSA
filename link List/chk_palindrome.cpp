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

node *revLL(node *head){
    if(head==NULL||head->next==NULL)return head;
    node *rest_head=revLL(head->next);
    node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

bool isPalindrome(node *head)
{
    if(head == NULL) return true;
    node *slow=head, *fast=head->next->next;
    while(fast != NULL && fast->next->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    node *rev= revLL(slow->next);
    node *curr=head;
    while( rev != NULL)
    {
        if(curr->data != rev->data) return false;

        rev=rev->next;
        curr=curr->next;
    }
    return true;
}

int main() 
{ 
	node *head=new node('g');
	head->next=new node('f');
	head->next->next=new node('g');
	if(isPalindrome(head))
	    cout<<"Yes";
	else
	    cout<<"No";
	return 0;
} 