class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, n in enumerate(nums):
            hashMap[n] = i
        for i, n in enumerate(nums):
            tempVal = target - n
            if hashMap.get(tempVal) and i != hashMap.get(tempVal):
                return [i, hashMap.get(tempVal)]
        return [0, 0]