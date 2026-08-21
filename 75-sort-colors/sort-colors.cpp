// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         vector<int> result;
//         int zeroCount = 0, oneCount = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == 0) {
//                 result.insert(result.begin() + zeroCount, 0);
//                 zeroCount++;
//             } else if (nums[i] == 1) {
//                 result.insert(result.begin() + zeroCount + oneCount, 1);
//                 oneCount++;
//             } else {
//                 result.insert(result.end(), 2);
//             }
//         }

//         nums = result;
//     }
// };

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
