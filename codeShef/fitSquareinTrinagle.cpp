#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,area;
      
        cin>>n;

        area=(n*n)/2;

        if(area>=4){
          cout<<area/4<<endl;
        }

        else{
            cout<<0<<endl;
        }



    }

    return 0;
}