class Solution {
public:
    void sortColors(vector<int>& nums) {
        size_t nums_size = nums.size();
        bool sorted = false;
        while (!sorted) {
            sorted = true;
            for (int i = 0; i < nums_size - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                    sorted = false;
                }
            }
            nums_size--;
        }
    }
};