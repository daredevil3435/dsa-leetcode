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
        next= NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);

    n->next = head;
    cout<<"Insertathead"<<n<<" "<<n->next<<endl;
    head = n;

    if(head == NULL)
    {
        head=n;
        cout<<head<<endl;
        return;
    }
}

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    cout<<"before iteration"<<temp<<endl;
    while(temp->next!= NULL){
        
        temp = temp->next;
        cout<<temp<<endl;
    }

    temp->next = n;
}

void display (node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL";
    cout<<endl;
}

int main()
{
    
    int t;
    cin>>t;

    while(t>0){
    
    node* head = NULL;
    int num;
    cin>>num;

    int arr[num];

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    for(int i=1; i<num; i++){
        insertAtTail(head, arr[i]);
    }

    insertAtHead(head, arr[0]);

    display(head);
    t--;
    }
}

