#include<iostream>
using namespace std;

#define n 100
class Stack
{
    int* arr;
    int top;

    public:

    Stack()
    {
        arr = new int[n];
        top = -1;

    }
    
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;


    }

    void pop()
    {
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty()
    {
        return top==-1;
    }
};

int main()
{
    

    
   Stack s1;

   s1.push(10);
   s1.push(20);
   s1.push(30);
   s1.push(40);

   cout<<s1.Top()<<endl;

   s1.pop();

   cout<<s1.Top()<<endl;

   cout<<s1.isEmpty()<<endl;







    return 0;
}