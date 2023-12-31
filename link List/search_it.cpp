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

int search_it(node *head,int key){
    int pos=1;
    node *curr=head;
    while(curr != NULL)
    {
        if(curr->data == key) return pos;

        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    node *curr=head;
    while(curr != NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }

    cout<<"Position is : "<<search_it(head,50);
    return 0;
}