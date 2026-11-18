class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        for (int i = sizeof(n) * CHAR_BIT; i > 0; i--) {
            if ((n & (1 << i)) != 0) counter++;
        }
        return counter;
    }
};
