class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return string();
        string encoded_str = "";
        for (const string& s : strs) {
            int s_len = s.length();
            encoded_str += "#" + to_string(s_len) + "#" + s;
        }
        return encoded_str;
    }

    vector<string> decode(string s) { // #4need#4code#4love#3you
        if (s.empty()) return vector<string>();
        int s_len = s.length(), i = 0;
        vector<string> res;
        while (i < s_len) {
            if (s[i] == '#') {
                int j = i + 1;
                string len_str = "";
                // Read all consecutive digits for length
                while (j < s_len && isdigit(s[j])) {
                    len_str += s[j];
                    j++;
                }
                if (j < s_len && s[j] == '#') {
                    j++; // skip the separator
                }
                int word_len = stoi(len_str);
                string word = s.substr(j, word_len);
                res.push_back(word);
                i = j + word_len;
            } else {
                i++;
            }
        }
        return res;
    }
};