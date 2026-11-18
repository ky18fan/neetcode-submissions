class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0
        j = 0
        for i in range(0, len(nums)):
            tmp_num1 = nums[i]
            for j in range(i + 1, len(nums)):
                tmp_num2 = nums[j]
                if tmp_num1 + tmp_num2 == target:
                    return [i, j]
        return [i, j]