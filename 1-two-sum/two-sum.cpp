class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> result;

        for (int i = 0; i < n; i++) {
            result.push_back({nums[i], i});
        }

        sort(result.begin(), result.end());

        int i = 0;
        int j = n - 1;

        while (i < j) {
            int sum = result[i].first + result[j].first;
            if (sum == target) {
                return {result[i].second, result[j].second};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {};
    }
};