class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit_count = 0;
        for (int i = 31; i >= 0; i--) {
            bit_count += (n & (0x1 << i)) >> i;
        }
        return bit_count;
    }
};
