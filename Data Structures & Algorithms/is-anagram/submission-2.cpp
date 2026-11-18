class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        std::map<char, int> map1;
        std::map<char, int> map2;
        for (int i = 0; i < s.size(); i++) {
            map1[s[i]] += 1;
            map2[t[i]] += 1;
        }
        if (map1 == map2) return true;
        else return false;
    }
};
