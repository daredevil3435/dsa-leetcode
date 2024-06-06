#include<iostream>
using namespace std;

int linearSearch(int ar[], int n, int k){
   for(int i=0; i<n; i++){
        if(k == ar[i]){
            return i;
        }
        
    }

    return -1;
}

int main() {

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    int res= linearSearch(a, n, key);
    if(res != -1){
        cout<<"Found at"<<res<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

   
    return 0;
}
