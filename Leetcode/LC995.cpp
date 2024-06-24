class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int res = 0, n = nums.size(), flipped = 0;
        for (int i = 0; i < n; ++i) {
            if (i >= k) flipped -= nums[i - k] / 2;
            if (flipped % 2 == nums[i]) {
                if (i + k > n) return -1;
                nums[i] += 2;
                ++flipped;
                ++res;
            }
        }
        return res;
    }
};