#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head, int val)
{
    node* n= new node(val);

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
void deleteHead(node* &head)
{
    node* toDelete=head;
    head=head->next;

    delete toDelete;
}
void deletion(node* head,int val) //for deleting nodes in between
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL){
        deleteHead(head);
        return;
    }
  

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }

    node* toDelete= temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main()
{
   node* head=NULL;

   insertAtTail(head,10);
   insertAtTail(head,20);
   insertAtTail(head,30);
   insertAtTail(head,40);

   display(head);

//    int n;
//    cout<<"enter no to delete: ";
//    cin>>n;

//    deletion(head,n);

   deleteHead(head);

   display(head);

    return 0;
}