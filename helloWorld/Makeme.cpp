#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(x==y){
            cout<<"YES"<<endl;
        }
        else if(y<x){
            while(y<=x){
                y=y*2;
            }

            if(y==x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            while(x<=y){
                x=x*2;
            }
            if(x==y){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }


        }
    }
    
    
    
    return 0;

}