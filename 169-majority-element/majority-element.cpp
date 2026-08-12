// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         unordered_map<int,int> freq;
//         int n = nums.size();
//         for (auto it : nums) {
//             freq[it]++;
//         }

//         for (auto& p : freq) {
//             if (p.second > n / 2) {
//                 return p.first;
//             }
//         }
//         return 0;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int left = 0;
//         int right = 0;
//         int count = 0;
//         int majority = 0;
//         while (left <= right) {
//             if (nums[left] == nums[right]) {
//                 count++;
//                 majority = max(count, majority);
//                 right++;
//                 if (majority > n / 2) {
//                     return nums[left];
//                 }
//             } else {
//                 left = right;
//                 count =0;
//             }
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
                if (count > n / 2)
                    return nums[i];
            } else {
                count = 1;
            }
        }
        return nums[0]; // handles n == 1
    }
};
