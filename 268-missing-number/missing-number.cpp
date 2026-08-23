// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         int n = nums.size();

//         for (int i = 0; i <= n; i++) {
//             int k;
//             for (k = 0; k < n; k++) {          // scan the WHOLE array (not k
//             < i)
//                 if (i == nums[k]) {             // check if i EXISTS in nums
//                     break;                        // found it, stop scanning
//                 }
//             }
//             if (k == n) {                        // loop finished without
//             finding i
//                 return i;                          // i was never found ->
//                 it's missing
//             }
//         }

//         return -1;  // won't be reached for valid input

//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> mp;

        for (auto it : nums) {
            mp[it]++;
        }

        for (int i = 0; i <= n; i++) {           // check 0 to n INCLUSIVE
            if (mp.find(i) == mp.end()) {          // i is NOT in the map
                return i;                            // found the missing
            
            }
        }

        return -1;  // won't be reached for valid input
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         int n = nums.size();
//         int real_sum = n*(n+1)/2;
//         int obv_sum = 0;

//         for(int i=0; i<n; i++){
//             obv_sum = obv_sum + nums[i];
//         }

//         return real_sum - obv_sum;

//     }
// };

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         int N = nums.size();
//         int xor1 = 0, xor2 = 0;
//         int n = N - 1;
//         for (int i = 0; i < n; i++) {
//             xor2 = xor2 ^ nums[i];
//             xor1 = xor1 ^ (i + 1);
//         }
//         xor1 = xor1 ^ N;
//         return xor1 ^ xor2;
//     }
// };