class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while (left < right) {
            cout << right << endl;
            right &= (right - 1);
            cout << right << endl;
        }
        return right;
    }
};