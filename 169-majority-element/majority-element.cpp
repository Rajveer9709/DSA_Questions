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

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int right = 0;
        int count = 0;
        int majority = 0;
        while (left <= right) {
            if (nums[left] == nums[right]) {
                count++;
                majority = max(count, majority);
                right++;
                if (majority > n / 2) {
                    return nums[left];
                }
            } else {
                left = right;
                count =0;
            }
        }
        return 0;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int count = 1;
//         for (int i = 1; i < n; i++) {
//             if (nums[i] == nums[i - 1]) {
//                 count++;
//                 if (count > n / 2)
//                     return nums[i];
//             } else {
//                 count = 1;
//             }
//         }
//         return nums[0]; // handles n == 1
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int cnt = 0;
//         int el;

//         for (int i = 0; i < nums.size(); i++) {
//             if (cnt == 0) {
//                 el = nums[i];
//             } else if (nums[i] == el) {
//                 cnt++;
//             } else {
//                 cnt--;
//             }
//         }

//         int cnt1 = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == el)
//                 cnt1++;
//         }

//         if (cnt1 > (nums.size() / 2)) {
//             return el;
//         }
//         return -1;
//     }
// };
