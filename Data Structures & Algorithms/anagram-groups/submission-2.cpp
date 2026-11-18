class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouped_anagrams = {};
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            grouped_anagrams[key].push_back(s);
        }
        vector<vector<string>> result = {};
        for (const auto& pair : grouped_anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};
