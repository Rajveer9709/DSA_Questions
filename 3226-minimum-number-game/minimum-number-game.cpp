// class Solution {
// public:
//     vector<int> numberGame(vector<int>& nums) {

//         int n = nums.size();

//         vector<int> arr;

//         int smallest = 0;
//         int ssmallest = 1;

//         for (int i = 0; i < n; i++) {
//             if (nums[i] < smallest) {
//                 ssmallest = smallest;
//                 smallest = nums[i];
//             }
//             nums.erase(nums.begin() + i);
//             arr.push_back(ssmallest);
//             arr.push_back(smallest);
//         }

//         return arr;
//     }
// };

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        int n = nums.size();
        int x = 0;

        sort(nums.begin(), nums.end());
        while (x < nums.size()) {
            reverse(nums.begin() + x, nums.begin() + x + 2);
            x = x + 2;
            ;
        }

        return nums;
    }
};