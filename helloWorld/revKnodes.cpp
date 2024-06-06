//this is for reversing k nodes from linkedlist like 
//if there's linkedlist like 1->2->3->1->NULL and we've to reverse 2 nodes new linked list will be
// 1->2->3->1->NULL  input
//2->1->4->3->NULL   output

//solving this problem require knowledge of both iterative and recursive reversing of linked list


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

void insertAtTail(node* &head,int val)
{
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

node* reverseK(node* &head,int k)
{
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;

    int count=0;

    while(currPtr!=NULL && count<k)
    {
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;

        prevPtr=currPtr;
        currPtr=nextPtr;

        count++;

    }

    if(nextPtr!=NULL){
        head->next=reverseK(nextPtr,k);
    }

    return prevPtr;

}

int main()
{
    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);

    display(head);

    node* newHead=reverseK(head,2);

    display(newHead);
    

    
    
    return 0;
}