class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        numsLen = len(nums)
        ans = [0] * (numsLen * 2)
        for i in range(0, numsLen):
            ans[i] = nums[i]
            ans[i + numsLen] = nums[i]
        return ans