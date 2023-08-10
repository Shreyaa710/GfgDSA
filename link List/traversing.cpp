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
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    printlist(head);
    printlist(head);

    return 0;
}