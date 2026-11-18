class Solution {
public:
    /*
    XOR
    0 0 = 0
    0 1 = 1
    1 0 = 1
    1 1 = 0

    1000
    1010
    0010

    AND
    0 0 = 0
    0 1 = 0
    1 0 = 0
    1 1 = 1

    1000
    1010
    1000 = shift_carry = 0001 0000 << 1

    carry = 0010 & 00010000
    00000010
    00010000
    00000000

    00000010
    00010000
    00010010
    
    0000 = res
    1110 = shift_carry
    0000

    0000
    1110
    1110
    */
    int getSum(int a, int b) { // a = 0111, b = 0111
        int res = a ^ b, carry = a & b; // res = 0000, carry = 0111
        while(carry != 0) {
            int shift_carry = carry << 1; // 1110
            carry = res & shift_carry; // 
            res ^= shift_carry; // 
        }
        return res;
    }
};
