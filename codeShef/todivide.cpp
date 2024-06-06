#include <iostream>
using namespace std;

int findNum(int p,int q,int r){
    for(int i=r;i<1000;i++){
	       if(i%p==0 && i%q!=0 ){
               
               return i;
	        }
    }
    return -1;
	      
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int a,b,n;
	    
	    cin>>a>>b>>n;

        cout<<findNum(a,b,n)<<endl;
        
	   } 
     
	return 0;
}
