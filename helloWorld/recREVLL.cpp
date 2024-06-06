//program to revrese linked list recurssively

#include<iostream>
using namespace std;

class node{
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

void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* recursiveReversing(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* newhead= recursiveReversing(head->next);
    
    head->next->next=head;
    head->next=NULL;

    return newhead;

}

int main(){
    
    
    node* head=NULL;

   insertAtTail(head,10);
   insertAtTail(head,20);
   insertAtTail(head,30);
   insertAtTail(head,40);

   display(head);

   node* newNode= recursiveReversing(head);

   display(newNode);
    
    
    return 0;
}