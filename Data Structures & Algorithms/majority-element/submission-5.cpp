class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int nums_size = nums.size();
        unordered_map<int, int> numbers = {};
        for (int i = 0; i < nums_size; i++) {
            numbers[nums[i]] += 1;
        }
        int res = 0;
        for (const auto& pair : numbers) {
            if (pair.second > nums_size / 2) {
                res = pair.first;
            }
        }
        return res;
    }
};