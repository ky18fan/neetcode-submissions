class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, n in enumerate(nums):
            tempValue = target - n
            if tempValue in nums and i != nums.index(tempValue):
                res = [i, nums.index(tempValue)]
                return sorted(res)
        return [0, 0]