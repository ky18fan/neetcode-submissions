class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        int user_num = 0;
        bool has_duplicate = false;
        for (const int& num : nums) {
            if (seen.count(num)) {
                has_duplicate = true;
                break;
            }
            seen.insert(num);
        }
        for (const int& val : seen) {
            cout << val << endl;
        }
        if (has_duplicate) {
            return true;
        }
        else {
            return false;
        }
    }
};