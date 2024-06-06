#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
node* reverseLL(node* &head){
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;

    while(currPtr!=NULL){
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;

        prevPtr=currPtr;
        currPtr=nextPtr;
    }

    return prevPtr;

}
void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

int main()
{

   node* head=NULL;

   insertAtTail(head,10);
   insertAtTail(head,20);
   insertAtTail(head,30);
   insertAtTail(head,40);

   display(head);

   node* newNode= reverseLL(head);

   display(newNode);




    return 0;
}