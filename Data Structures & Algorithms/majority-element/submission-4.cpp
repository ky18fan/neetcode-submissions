class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> res;
        for (const int& num : nums){
            res[num] += 1;
        }
        size_t res_size = nums.size();
        int majority_element = 0;
        for (const auto& pair : res) {
            if (pair.second >= res_size / 2) majority_element = pair.first;
        }
        return majority_element;
    }
};