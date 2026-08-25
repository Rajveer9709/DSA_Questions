// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {

//         int n = nums.size();
//         int low = 0;
//         int high = n - 1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (mid % 2 == 0) {
//                 if (mid + 1 < n && nums[mid] == nums[mid + 1]) {
//                     low = mid + 1;
//                 } else if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) {
//                     high = mid - 1;
//                 } else {
//                     return nums[mid];
//                 }
//             } else {
//                 if (nums[mid] == nums[mid - 1]) {
//                     low = mid + 1;
//                 } else if (mid + 1 < n && nums[mid] == nums[mid + 1]) {
//                     high = mid - 1;
//                 } else {
//                     return nums[mid];
//                 }
//             }
//         }
//         return 0;
//     }
// };


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int result = 0;
//         for (int num : nums)
//             result ^= num;
//         return result;
//     }
// };


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 2; // last valid "even" position to compare

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1)
                mid--; // force mid to be even

            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2; // single element is after this pair
            } else {
                high = mid - 1; // single element is at or before mid
            }
        }
        return nums[low];
    }
};