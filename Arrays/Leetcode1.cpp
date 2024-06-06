#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    vector<int> arr1[n+m];
    vector<int> arr2[m];

    for(int i=0;i<n; i++){
        cin>>i;
        arr1[i].push_back(i);
    }

    int len1= arr1->size();

    for(int i=0; i< len1; i++){
       cout<< arr1[i] <" ";
    }

    return 0;
}
