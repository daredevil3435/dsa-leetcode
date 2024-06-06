#include<iostream>
using namespace std;

int binarySearch (int a[], int n, int k){
    int s=0;
    int e = n;
    
    int mid = (s+e)/2;
    while(s<=e){
        if(mid <k){
          s= mid+1;
        }
        else if(k< mid){
            e= mid-1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main()
{
    int n;
    int a[n];

    cin>>n;

    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;
    

    int res= binarySearch(a, n, key);
    if(res != -1){
        cout<<"Found at"<<res<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }








    return 0;
}