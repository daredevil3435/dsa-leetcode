#include<iostream>
#include<vector> 
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>even;
    vector<int>odd;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even.push_back(a[i]);
        }
        else{
            odd.push_back(a[i]);
        }
    }

    for( int i=0 ; i<even.size(); i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;


   for( int i=0 ; i<odd.size(); i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;



    return 0;
}