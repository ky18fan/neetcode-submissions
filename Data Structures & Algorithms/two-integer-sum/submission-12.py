class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # [3, 4, 5, 6] = 7
        # 3 = 0, 4 = 1, 5 = 2, 6 = 3
        hashMap = {}
        for i in range(len(nums)):
            hashMap[nums[i]] = i
        for i in range(len(nums)):
            calc = target - nums[i]
            if calc in hashMap.keys() and hashMap[calc] != i:
                return [i, hashMap[calc]]
        return []