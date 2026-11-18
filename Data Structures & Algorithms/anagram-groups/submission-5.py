class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        for st in strs:
            k = [0] * 26
            for ch in st:
                k[ord(ch) - ord('a')] += 1
            key = tuple(k)
            if key not in groups:
                groups[key] = []
            groups[tuple(k)].append(st)
        return list(groups.values())
