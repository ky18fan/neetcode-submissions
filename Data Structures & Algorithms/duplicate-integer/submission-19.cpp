class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> seen;
        for (const int& n : nums) {
            if (!seen.contains(n)) {
                seen.insert(n);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};