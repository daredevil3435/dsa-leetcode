#include <iostream>
using namespace std;

int totalCOst(int p,int q,int r,int s){
    
    int cs1=p+q;
    int cs2=r+s;
    
    if(cs1<=cs2){
        return cs1;
    }
    
    else{
        return cs2;
    }
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int x1,y1,x2,y2;
	    
	    cin>>x1>>y1>>x2>>y2;
	    
	    int result=totalCOst(x1,y1,x2,y2);
	    
	    cout<<result<<endl;
	    
	    
	    
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
