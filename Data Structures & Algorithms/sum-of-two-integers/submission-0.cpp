class Solution {
public:
    int getSum(int a, int b) {
       int carry = a & b;
        int res = a ^ b;
        while(carry!=0){
            int shift_carry = carry << 1;
            carry = res & shift_carry;
            res ^= shift_carry;
        }
        return res;
    }
};
