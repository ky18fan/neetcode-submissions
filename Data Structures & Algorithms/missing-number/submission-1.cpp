class Solution {
public:
    /* XOR
    0 0 = 0
    0 1 = 1
    1 0 = 1
    1 1 = 0

    use the size of the vector and xor it 
    with the result of i ^ nums[i]

    */
    int missingNumber(vector<int>& nums) {
        int nums_size = nums.size();
        int xor_n = nums_size;
        for (int i = 0; i < nums_size; i++) {
            xor_n ^= i ^ nums[i];
        }
        return xor_n;
    }
};
