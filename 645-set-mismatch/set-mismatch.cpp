// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {

//         vector<int> result;

//         for (int i = 0; i <= nums.size() - 1; i++) {
//             if (nums[i + 1] != nums[i] + 1) {
//                 result.push_back(nums[i]);
//                 result.push_back(nums[i] + 1);
//                 break;
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);

        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }

        int duplicate = -1, missing = -1;
        for (int num = 1; num <= n; num++) {
            if (count[num] == 2) duplicate = num;
            if (count[num] == 0) missing = num;
        }

        return {duplicate, missing};
    }
};