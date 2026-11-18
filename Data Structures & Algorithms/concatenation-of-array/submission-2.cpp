#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t new_size = nums.size() * 2; 
        vector<int> ans(new_size);
        int new_indexer = 0;
        cout << "printing the size of ans vector: " << new_size << endl;
        for (int i = 0; i <= new_size; i++) {
            if (i <= nums.size()) {
                ans[i] = nums[i];
            }
            else {
                ans[i-1] = nums[new_indexer];
                new_indexer++;
            }
        }
        cout << "printing ans vector: " << endl;
        for (const int& num : ans) {
            cout << num << endl;
        }
        return ans;
    }
};
