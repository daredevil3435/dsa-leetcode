#include<iostream>
using namespace std;

int returnProd(int n){
    int prod=1;
    for(int i=1; i<n; i++){
        prod= i* returnProd(i+1);
    }

    return prod;
}

int main()
{
    int n;

    cin>>n;

    // int prod=1;

    // for(int i=1; i<n+1; i++)
    // {
    //     prod= prod*i;
    // }



    int res= returnProd(n);

    cout<<res<<endl;





    return 0;
}