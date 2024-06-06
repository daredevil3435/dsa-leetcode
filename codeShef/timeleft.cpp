#include <iostream>
using namespace std;

int timeLeft(int p,int q,int r){
    if(p>3){
        int j=p/3;
        int min=p*q;
        
        int brk=j*r;
        int final=min+brk;
        
        return final;
    }
    else{
        return p*q;
    }
}

int main() {
	// your code goes here
// 	

   int t;
   cin>>t;
   
   for(int i=0;i<t;i++){
       int x,y,z;
       cin>>x>>y>>z;
       
       
       int result=timeLeft(x,y,z);
       cout<<result<<endl;
       
   }
	
	
	return 0;
}
