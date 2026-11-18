class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> binCountVector = {};
        for (int i = 0; i <= n; i++) {
            int bitCount = 0;
            for (int j = 31; j >= 0; j--) {
                bitCount += (i & (0x1 << j)) >> j;
            }
            binCountVector.push_back(bitCount);
        }
        return binCountVector;
    }
};
