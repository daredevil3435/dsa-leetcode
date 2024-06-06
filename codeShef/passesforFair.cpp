#include <iostream>
using namespace std;

bool willTheyGo(int j,int l){
    if(j<=l){
        return true;
    }
    else{
        return false;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    
	    //n are the number of friends excluding chef
	    //k are the number of tickets chef got 
	    
	    int res=willTheyGo(n+1,k);
	    
	    if(res==1){
	        cout<<"YES"<<endl;
	    }
        else{
            cout<<"NO"<<endl;
        }	    
	}
	return 0;
}
