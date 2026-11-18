class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hashMap = defaultdict(int)
        duplicate = False
        for num in nums:
            hashMap[num] += 1
            if hashMap[num] > 1:
                duplicate = True
        return duplicate
