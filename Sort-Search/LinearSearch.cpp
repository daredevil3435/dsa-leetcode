#include<iostream>
using namespace std;


int linearSearch(int a, int b, int arr[]){
    for(int i=0; i<a; i++){
        if(arr[i] == b){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int key;
    cin>>key;
    
    int res = linearSearch(n,key,a);

    cout<<"Found at "<<res;

 return 0;
}