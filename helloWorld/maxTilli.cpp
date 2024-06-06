#include<iostream>
#include<cmath>
using namespace std;

//in this problem is for outputting the max number till i'th position

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++){
     cin>>a[i];
  }

  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;

  int mx= 0;

  for(int i=0;i<n;i++){
    mx= max(mx, a[i]);
    cout<<mx<<" ";
  }



 return 0;
}