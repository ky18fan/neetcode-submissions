class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        duplicate = False
        i = 0
        while not duplicate and i < len(nums):
            currentNum = nums[i]
            duplicate = False
            for idx, num in enumerate(nums):
                if idx != i and num == currentNum:
                    duplicate = True
            i += 1
        return duplicate

            