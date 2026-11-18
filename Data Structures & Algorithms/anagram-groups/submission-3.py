class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashMap = defaultdict(list)
        for s in strs: # iterate each word in strs
            count = [0] * 26 # create a list of 26 0's
            for c in s: # iterate each char of s
                count[ord(c) - ord('a')] += 1 # [1,0,0,0,0,0,0...]
            hashMap[tuple(count)].append(s) 
        return list(hashMap.values())