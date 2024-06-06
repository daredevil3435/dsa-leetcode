//compare nums1[i] with nums2[i] ;
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums2[j]<nums1[i]){
                    nums1[i].push_back(nums2[j]);
                }
            }
        }
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> arr1[n+m];
    vector<int> arr2[m];

    for(int i=0; i<n; i++){
        cin>>i;
        arr1[i].push_back(i);
    }

    for(int i=0; i<m; i++){
        cin>>i;
        arr2[i].push_back(i);
    }

    for(int i=0; i<arr1->size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;

}