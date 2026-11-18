class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sMap = {}
        tMap = {}
        if len(s) != len(t):
            return False
        for i in range(len(s)):
            if sMap.get(s[i]):
                sMap[s[i]] += 1
            else:
                sMap[s[i]] = 1
            if tMap.get(t[i]):
                tMap[t[i]] += 1
            else:
                tMap[t[i]] = 1
        if sMap == tMap:
            return True
        else:
            return False