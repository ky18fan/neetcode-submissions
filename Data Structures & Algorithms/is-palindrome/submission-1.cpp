class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        regex letter_regex("[a-zA-Z0-9]");
        int s_len = s.size(), j = 0;
        string res = "";
        for (int i = 0; i <= s_len - 1; i++) {
            if (regex_match(string(1, s[i]), letter_regex)) {
                res += s[i];
            }
            else if (isalnum(s[i])) continue;
        }
        int res_len = res.size() - 1;
        while (j < res_len) {
            if (res[j++] != res[res_len--]) { 
                return false;
            }
        }
        return true;
    }
};
