class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        0 0 = 0
        0 1 = 1
        1 0 = 1
        1 1 = 0

        res = 0;
        0000
        0011
        0011

        res = 3;
        0011
        0010
        0001

        res = 1;
        0001
        0011
        0010
        */
        int res = 0;
        for (const int& n : nums) {
            res ^= n;
        }
        return res;
    }
};
