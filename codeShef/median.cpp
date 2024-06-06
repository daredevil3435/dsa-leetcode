#include<iostream>
using namespace std;


void ans(int a,int b,int ar[]){
    int m1,m2;
    float med1,ansK;

    if(a==1){
        cout<<ar[b/2]<<endl;
    }
    else{
        for(int i=0;i<a;i++){
            m1+=ar[i];
        }
        med1=m1/a;

        for(int j=a+1;j<b;j++){
            m2+=ar[j];
        }

        ansK=med1+m2;
        cout<<ansK<<endl;
    }

}
int main(){
    int t;
    cin>>t;

    //sort an array then take median from sorted array till Mth pos and then add it wth rest

    while(t--){
        int n,m;
        // int m1;
        // float median;
        cin>>n>>m;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        // bubbleSort(a,n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }

        ans(m,n,a);



        
    }

    return 0;
}