#include<iostream>
using namespace std;

int isTen(int j){
    int counter=0;
    if(j>=10){
        counter+=1;
    }
    return counter;
}

int main(){

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    // int counter=0;

    int r=isTen(a);

    int r1=isTen(b);
    int r2=isTen(c);
    int r3=isTen(d);

    // int r4=r+r1;
    // int r5=r2+r3;

   int result=r+r1+r2+r3;
    

    cout<<result<<endl;

    return 0;
}



// #include