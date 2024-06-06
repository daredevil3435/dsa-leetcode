#include<string>
#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:

    vector<string> bigSorting(vector<string> unsorted){
       sort(unsorted.begin(),unsorted.end(),[](const string& a, const string& b){
        if(a.length() != b.length()){
            return a.length() < b.length();
        }
        return a < b;
       });

       return unsorted;
    }
};

int main()
{
    Solution solution;

    vector<string> unsorted = {"1","635264827498492838","36127367","3","189"};

    vector<string> ans = solution.bigSorting(unsorted);

    for(int i=0; i<ans.size(); ++i){
        cout<<ans[i]<<" ";
    }

    return 0;
}
