class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); i++) {
            const int num = nums[i];
            for (size_t j = i + 1; j < nums.size(); j++) {
                const int next_num = nums[j];
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
