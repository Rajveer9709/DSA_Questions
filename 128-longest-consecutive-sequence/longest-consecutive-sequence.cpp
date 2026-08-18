// class Solution {
// public:
//     bool ls(vector<int>& nums, int num) {
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == num) {
//                 return true;
//             }
//         }
//         return false;
//     }

//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         if (n == 0) return 0;

//         int longest = 1;
//         for (int i = 0; i < n; i++) {
//             int x = nums[i];
//             int cnt = 1;

//             while (ls(nums, x + 1)) {
//                 x = x + 1;
//                 cnt = cnt + 1;
//                 longest = max(longest, cnt);
//             }
//         }
//         return longest;
//     }
// };



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         int longest = 1;
//         int cnt = 1;
//         int last_smaller = INT_MIN;
//         int n =nums.size();

//         if(n == 0) return 0;

//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < n; i++) {
//             if (nums[i] - 1 == last_smaller) {
//                 cnt++;
//                 last_smaller = nums[i];
//             }
//             else if(nums[i] != last_smaller){
//                 cnt =1;
//                 last_smaller = nums[i];
//             }
//             longest = max(longest, cnt);
//         }
//         return longest;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

    int longest = 0;

    for (int x : s) {

        // x is the beginning of a sequence
        if (s.find(x - 1) == s.end()) {

            int current = x;
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
    }
};


