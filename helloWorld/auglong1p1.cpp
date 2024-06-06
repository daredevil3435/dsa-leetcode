#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
     int x,y;
     cin>>x>>y;

     if(x==y)
     {
        cout<<"YES"<<endl;
     }

     else{
        if(x<y){
            while(x<=y){
                x=x*2;
            }

            if(x==y)
               cout<<"YES"<<endl;
     
            else
               cout<<"NO"<<endl;

        }

        else{
            while(y<=x){
                y=y*2;
            }
            if(x==y)
              cout<<"YES"<<endl;
     
            else
              cout<<"NO"<<endl;
        }


     }

    //  if(x==y)
    //     cout<<"YES"<<endl;
     
    //  else
    //     cout<<"NO"<<endl;

   }









    return 0;
}