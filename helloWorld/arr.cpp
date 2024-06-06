#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements in array: ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<"Elm in array are :";
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;





    return 0;
}
