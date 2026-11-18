class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sHashMap = defaultdict(int)
        tHashMap = defaultdict(int)
        for ch in s:
            sHashMap[ch] += 1
        for ch in t:
            tHashMap[ch] += 1
        if sHashMap == tHashMap:
            return True
        else:
            return False