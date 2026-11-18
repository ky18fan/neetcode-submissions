class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while (left < right) {
            cout << right << endl;
            right &= (right - 1);
        }
        return right;
    }
};