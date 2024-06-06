#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=1; i<n; i++){
        int temp;
        for(int j=0; j<i; j++){
            if(a[i]<a[j]){
               temp= a[j];
               a[j]= a[i];
               a[i]= temp;
            }
        }
    }


    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    return 0;
}