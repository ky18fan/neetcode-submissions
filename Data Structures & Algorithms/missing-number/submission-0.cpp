class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nums_size = nums.size();
        int xorr_n = nums_size;
        for (int i = 0; i < nums_size; i++) xorr_n ^= i ^ nums[i];
        return xorr_n;
    }
};
