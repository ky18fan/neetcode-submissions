class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const string& s : strs) { //{"act","pots","tops","cat","stop","hat"}
            string key = s;
            sort(key.begin(), key.end());
            cout << key << endl;
            res[key].push_back(s);
        }
        vector<vector<string>> result_list; // [[]]
        for (const auto& pair : res) {
            result_list.push_back(pair.second);
        }
        return result_list;
    }
};
