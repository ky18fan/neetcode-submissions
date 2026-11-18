class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size() * 2);
        int idx = 0;
        for (int i = 0; i < 2; i++) {
            for (int& num : nums) {
                ans[idx++] = num;
            }
        }
        return ans;
    }
};