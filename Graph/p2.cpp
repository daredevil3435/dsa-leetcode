#include<bits/stdc++.h>
using namespace std;

bool isSafe()
{


}

bool nQueen(int** arr, int x,int n )
{
   if(x>=n){
    return true;
   }

   for(int col=0; i)
}


int main()
{
    int n;
    cin>>n;

    int **arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
        
    }

    if(nQueen(arr,0,n)){
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<; j++){
                cout<<arr[i][j]<<" "
            }
            cout<<endl;
        }
    }

    return 0;


}