class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sDict = {}
        tDict = {}
        for c in s:
            if not sDict.get(c):
                sDict[c] = 1
            else:
                sDict[c] += 1
        for c in t:
            if not tDict.get(c):
                tDict[c] = 1
            else:
                tDict[c] += 1
        if sDict == tDict:
            return True
        return False