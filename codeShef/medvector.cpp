#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ans(int a,int b,vector<int>c){
    int m1,m2;
    float med1,ansK;

    if(a==1){
        cout<<c[b/2]<<endl;
    }
    else{
        for(int i=c.begin();i<c(a);i++){
            m1+=c[i];
        }
        med1=m1/a;

        for(int j=a+1;j<b;j++){
            m2+=c[j];
        }

        ansK=med1+m2;
        cout<<ansK<<endl;
    }

}


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>i;
            v.push_back(i);
        }

        sort(v.begin(),v.end());
        

        ans(m,n,v);

    }

    return 0;
}