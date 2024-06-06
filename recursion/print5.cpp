#include<iostream>

void printNum(int n){
    if(n<1){
        return;
    }
    std::cout<<n<<std::endl;
    printNum(n-1);


    
}
int main(){
    int n = 5;

    printNum(5);

    return 0;
}