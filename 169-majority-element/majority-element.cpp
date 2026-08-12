class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> freq;
        int n = nums.size();
        for (auto it : nums) {
            freq[it]++;
        }

        for (auto& p : freq) {
            if (p.second > n / 2) {
                return p.first;
            }
        }
        return 0;
    }
};