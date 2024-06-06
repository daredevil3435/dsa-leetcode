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

void insertAtTail(node* &head,int val){

    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

node* revLL(node* head){
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;

    while(prevPtr!=NULL){
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
        cout<<temp<<"->";
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
    insertAtTail(head,50);

    display(head);

    node* newHead=revLL(head);

    display(newHead);
    
    return 0;
}