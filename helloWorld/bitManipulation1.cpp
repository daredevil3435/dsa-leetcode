#include<iostream>
using namespace std;

int getBIt(int a,int pos){
    return ((a & (1<<pos))!=0);
}

int setBIt(int a,int pos){
    return (a | (1<<pos));
}

int clrBit(int a, int pos){
    

    return (a & (~(1<<pos)));
}

int updateBit(int a, int pos, int val){
    a= (a & (~(1<<pos))) ;
    return( a | (val<<pos)) ;
}

int main()
{
    int n=5;
 
    // cout<<getBIt(5,2)<<endl;
    // cout<<setBIt(5,1)<<endl;
    // cout<<clrBit(5,2)<<endl;
    cout<<updateBit(5,1,1);

    return 0;
}