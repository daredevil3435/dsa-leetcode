
#include<iostream>
using namespace std;

int main(){
  
  int n;
  int a[n];

  cin>>n;
  for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
 int sum=0; 

  for(int i=0;i<n;i++){
    for(int j=i+1; j<n;j++){
       sum=sum+a[i]+a[j];
       cout<<sum<<" ";
    }
  }
 return 0;
}
//problem --> Given an array a[i] of size n . output sum of each subarray of the given array