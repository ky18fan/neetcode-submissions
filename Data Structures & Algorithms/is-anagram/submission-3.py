class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sHashMap = defaultdict(int)
        tHashMap = defaultdict(int)
        for sChar in list(s):
            sHashMap[sChar] += 1
        for tChar in list(t):
            tHashMap[tChar] += 1
        if sHashMap == tHashMap:
            return True
        else: return False
        