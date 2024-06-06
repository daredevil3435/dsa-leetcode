#include<iostream>
#include<string>
using namespace std;

int main() 
{
  string s1;
  cin>>s1;
  for(int i=sizeof(s1);i>=0;i--)
  {
      cout<<s1[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}