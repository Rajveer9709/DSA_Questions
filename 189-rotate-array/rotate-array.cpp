// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), (nums.begin() + k));
//         reverse((nums.begin() + k), nums.end());
//     }
// };

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;

//         for (int j = 0; j < k; j++) {
//             int temp = nums[n - 1];
//             for (int i = n - 1; i > 0; i--) {
//                 nums[i] = nums[i - 1];
//             }
//             nums[0] = temp;
//         }
//     }
// };

//  class Solution {
//  public:
//      void rotate(vector<int>& arr) {
//          int temp = arr[0];
//          for (int i = 0; i < arr.size() - 1; i++) {
//              arr[i] = arr[i + 1];
//          }
//          arr[arr.size() - 1] = temp;
//      }
// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;                    

    vector<int> temp;

    for (int i = n - k; i < n; i++) {   
        temp.push_back(nums[i]);
    }

    for (int i = 0; i < n - k; i++) {   
        temp.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}
};
