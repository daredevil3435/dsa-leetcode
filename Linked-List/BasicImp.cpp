//This is basic implementation of LinkedList

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data= val;
        next = NULL;
    }

};

void insertAtHead(node* &head, int val)
{
    node* n = new node(val);

    n->next = head;
    head = n;

    if(head == NULL)
    {
        head = n;
        return;
    }
}

int main()
{










    return 0;
}