#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;
    head = n;

    if(head == NULL){
        head = n;
        return;
    }
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp ->next;


    }

    temp->next = n;

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

    cout<<"NULL";
    cout<<endl;
}


int main(){
    
    node* head1 = NULL;
    node* head2= NULL;
    
    vector<int> arr1= {1,2,4};
    vector<int> arr2= {3, 5,6};

    for(int i=1; i<arr1.size();i++){
        insertAtTail(head1, arr1[i]);
    }

    for(int i=1; i<arr2.size();i++){
        insertAtTail(head2, arr2[i]);
    }

    insertAtHead(head1, arr1[0]);
    insertAtHead(head2, arr2[0]);

    display(head1);

    display(head2);



    return 0;
}

// This C++ program is implementing a basic linked list. Let's break down the main components of the program:

// 1. **Class `node`:**
//     - The class represents a node in a linked list.
//     - It has two public members: `int data` to store the value of the node, and `node* next` to store the pointer to the next node.
//     - The constructor `node(int val)` initializes the data and next pointers.

// 2. **Function `insertAtHead`:**
//     - This function inserts a new node with the given value at the beginning of the linked list.
//     - It takes a reference to the head of the list (`node* &head`) and the value to be inserted.
//     - It creates a new node, sets its next pointer to the current head, and then updates the head to point to the new node.

// 3. **Function `insertAtTail`:**
//     - This function inserts a new node with the given value at the end of the linked list.
//     - It takes a reference to the head of the list (`node* &head`) and the value to be inserted.
//     - If the list is empty, it simply creates a new node and sets the head to point to it.
//     - If the list is not empty, it traverses the list to find the last node and appends the new node to it.

// 4. **Function `display`:**
//     - This function displays the elements of the linked list.
//     - It takes a pointer to the head of the list (`node* head`) and prints each node's data value followed by "->".
//     - It prints "NULL" at the end of the list to indicate the end of the linked list.

// 5. **`main` function:**
//     - The main function takes an integer `t` as input, representing the number of test cases.
//     - Inside the loop for each test case:
//         - It initializes a linked list (`node* head`) to `NULL`.
//         - Reads an integer `num` representing the number of elements in the test case.
//         - Reads an array of `num` integers representing the values of the linked list nodes.
//         - Uses a loop to insert each element from the array into the linked list using `insertAtTail`.
//         - Finally, inserts the first element of the array at the head of the linked list using `insertAtHead`.
//         - Calls the `display` function to print the linked list.

// The program essentially demonstrates creating a linked list, inserting elements at the head and tail, and then displaying the linked list for each test case.