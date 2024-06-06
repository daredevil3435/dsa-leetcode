#include<iostream>

void printFn(int i, int n){
   if(i>n){
    return;
   }
   std::cout<<i<<std::endl;
   printFn(i+1,n);
}
int main(){
    int n = 5;
    
    printFn(1,n);
    return 0;
}