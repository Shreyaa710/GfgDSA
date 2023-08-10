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

node *insert_at_pos(node *head,int pos,int data){
    node *temp=new node(data);
    if(head == NULL){
      if(pos==1)  return temp;
      else return head;
    }

    node *curr=head;
    for(int i=1;i<=pos-2;i++){
        curr = curr->next;
    }
    if(curr == NULL) return head;

    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    head = insert_at_pos(head,2,40);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}