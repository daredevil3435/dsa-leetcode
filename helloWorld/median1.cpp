#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ans()

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>i;
            v.push_back(i);
        }

        sort(v.begin(),v.end());
    }

    return 0;
    
} // namespace std;

