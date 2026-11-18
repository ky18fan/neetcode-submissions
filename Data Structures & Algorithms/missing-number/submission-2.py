class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums_len = len(nums)
        xor_n = nums_len
        for i in range(nums_len):
            xor_n ^= i ^ nums[i]
        return xor_n