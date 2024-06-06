#include<iostream>

void backTrack(int i,int n){
    if(i<1){
        return;
    }
    backTrack(i-1,n);
    std::cout<<i<<std::endl;

}
int main(){
    int n = 5;

    backTrack(n,n);
    return 0;
}