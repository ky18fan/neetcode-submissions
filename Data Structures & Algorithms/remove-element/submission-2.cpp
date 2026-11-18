class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> new_nums = {};
        for (const int& num : nums){
            if (num != val) new_nums.push_back(num);
        }
        int i = 0;
        for (const int& n : new_nums) {
            nums[i] = new_nums[i];
            i++;
        }
        return i;
    }
};