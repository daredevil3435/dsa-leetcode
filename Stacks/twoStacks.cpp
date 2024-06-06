#include<iostream>
using namespace std;

#define n 50

class Stack
{
    int* arr;
    int top1;
    int top2;

    public:
    Stack()
    {
        arr = new int[n];
        top1 = -1;
        top2 = -1;
    }

    void push1(int a){
        if(top1== n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top1++;
        arr[top1] =a;
    }

    void push2(int b){
        if(top2== n-1){
            cout<<"Stack Overflow"<<endl;
            return ; 
        }

        top2++;
        arr[top2]= b;
    }

    void pop1()
    {
        if(top1==-1){
            cout<<"Stack is empty"<<endl;
            return ; 
        }
        top1--;
    }

     void pop2()
    {
        if(top2==-1){
            cout<<"Stack is empty"<<endl;
            return ; 
        }
        top2--;
    }

    int Top1(){
        if(top1==-1){
            cout<<"Stack is empty"<<endl;
            return -1; 
        }

        return arr[top1];
    }

    int Top2(){
        if(top2==-1){
            cout<<"Stack is empty"<<endl;
            return -1; 
        }

        return arr[top2];
    }

    bool isS1Empty(){
        return top1==-1;
    }

    bool isS2Empty()
    {
        return top2==-1;
    }



};

int main()
{
    Stack s1;
    // Stack s2;

    s1.push1(10);
    s1.push1(20);
    s1.push1(30);

    cout<<s1.Top1()<<endl;

    s1.pop1();

    cout<<s1.Top1()<<endl;

    s1.push2(11);
    s1.push2(22);
    s1.push2(33);

    cout<<s1.Top2()<<endl;

    s1.pop2();

    cout<<s1.Top2()<<endl;

    cout<<s1.Top1()<<endl;

    
    return 0;
}