class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> hashMap;
        bool duplicate = false;
        for (int i = 0; i < nums.size(); i++) {
            hashMap[nums[i]] += 1;
        }
        for (const auto& pair : hashMap) {
            if (pair.second > 1) {
                duplicate = true;
            }
        }
        return duplicate;
    }
};