#include<iostream>
using namespace std;

int main(){

   int t;
   cin>>t;

   for(int i=0;i<t;i++){
       int n,m;


       cin>>n>>m;

       int j= n%2;
       int k=m%2;

       int d=0;

       int f=n+m-1;
	    
	    if(j==0 && k==0){
	        cout<<d<<endl;
	    }
	    
	    else if(j==0 && k!=0){
	        cout<<n<<endl;
	    }
	    else if(j!=0 && k==0){
	        cout<<m<<endl;
	    }
	    
	   // else if(j!=0 && k!=0){
	   else{
	        cout<<f<<endl;
	    }

   }






    return 0;
}