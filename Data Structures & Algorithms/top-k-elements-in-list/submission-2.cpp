class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequentElements;
        vector<int> result = {};
        for (int& n : nums) {
            frequentElements[n]++;
        }

        vector<pair<int, int>> arr;
        for (const auto& pair : frequentElements) {
            arr.push_back({pair.second, pair.first});
        }
        sort(arr.rbegin(), arr.rend());

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }
        return result;
    }
};
