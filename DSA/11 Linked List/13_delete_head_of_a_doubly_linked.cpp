#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void print(node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

node*deleteHead(node*head){
    if (head==NULL)
    {
        return NULL;
    }
    if (head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node*temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

int main()
{
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
    node*temp3=new node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    print(head);
    head=deleteHead(head);
    print(head);
    return 0;
}