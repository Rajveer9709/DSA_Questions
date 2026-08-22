// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {

//         int low = 0;
//         int high = nums.size() - 1;
//         vector<int> result;

//         while (left <= right) {

//             int mid = low + (high - low) / 2;
//             if (nums[mid] < target) {
//                 low = mid + 1;
//             }
//             else if(nums[mid]>target){
//                 high = mid -1;
//             }

//             else{
//                 result.push_back(nums[mid]);
//                 return result;
//             }
//         }

//         return {-1,-1};

//     }
// };

// class Solution {
// public:
//     int findBound(vector<int>& nums, int target, bool isFirst) {
//         int low = 0, high = nums.size() - 1;
//         int result = -1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (nums[mid] < target) {
//                 low = mid + 1;
//             }
//             else if (nums[mid] > target) {
//                 high = mid - 1;
//             }
//             else {
//                 result = mid;
//                 if (isFirst) {
//                     high = mid - 1;  // keep searching left
//                 } else {
//                     low = mid + 1;   // keep searching right
//                 }
//             }
//         }

//         return result;
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = findBound(nums, target, true);
//         int last = findBound(nums, target, false);
//         return {first, last};
//     }
// };

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (lb == nums.size() || nums[lb] != target) {
            return {-1, -1};
        }

        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        return {lb, ub - 1};
    }
};