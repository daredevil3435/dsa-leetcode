//reverse array with simplest method possible

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=n; i>=0; i--){
        cout<<a[i]<<" ";
    }



}
