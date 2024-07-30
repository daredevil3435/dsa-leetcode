class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); ++i){
            int temp = nums[i];
            int mapped_num = 0;

            while(temp > 0){
                int digit = temp % 10;
                mapped_num = mapped_num + mapping[digit] * 10;
                
                temp /= 10;
            }

            map[nums[i]] = mapped_num;
        }

        vector<pair<int, int>> mapped_vec(map.begin(), map.end());
        sort(mapped_vec.begin(), mapped_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            if(a.second != b.second){
               return a.second < b.second;
            }

            return 
        });

        vector<int> solution;

        for(auto pair : mapped_vec){
            solution.push_back(pair.first);
        }

        return solution;
    }
};