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

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;
    head=n;

    if(head==NULL)
    {
        head=n;
        return;
    }

}

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

bool search(node* head,int key)
{
    node* temp =head;
    while(temp!=NULL)
    {
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
           
    }
    return false;

}


int main()
{
   
   node* head=NULL;

   //direct insertion

  insertAtTail(head,10);
  insertAtTail(head,20);
  insertAtTail(head,30);
  insertAtTail(head,40);
  insertAtHead(head,50);
  
//    int n;
//    cout<<"enter size of linkedlist: ";
//    cin>>n;
   
//    //for user input based insertion

//    for(int i=0;i<n;i++)
//    {
//     cin>>i;
//     insertAtTail(head,i);

//    }
   
   display(head);
//    cout<<endl;
   cout<<search(head,30);

 return 0;
}


