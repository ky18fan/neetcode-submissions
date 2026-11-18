class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list) # creates a hashMap
        for s in strs: #iterates each string
            count = [0] * 26 # it creates a list of 0's where each one is a counter per character from a -> z
            for c in s: #iterates each character of each string
                count[ord(c) - ord('a')] += 1 # increments by 1 counter mapping to current character
            res[tuple(count)].append(s) # the key is the counter and if it exists in hashMap it will append the word there
        return list(res.values()) # just print the values isntead of keys, where values are the strings (anagrams)
            
        