// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> mp;

//         for (auto it : nums) {
//             mp[it]++;
//         }

//         for (auto it : mp) {
//             if (it.second == 1) {
//                 return it.first;
//                 break;
//             }
//         }
//         return false;
//     }
// };


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         // Step 1: find the max element to size our hash array
//         int maxVal = *max_element(nums.begin(), nums.end());

//         // Step 2: create hash array of size (maxVal + 1), initialized to 0
//         vector<int> hashArr(maxVal + 1, 0);

//         // Step 3: count occurrences using the number as the index
//         for (auto it : nums) {
//             hashArr[it]++;
//         }

//         // Step 4: find the number with count == 1
//         for (int i = 0; i <= maxVal; i++) {
//             if (hashArr[i] == 1) {
//                 return i;
//             }
//         }

//         return -1; // fallback, won't be reached per problem constraints
//     }
// };

// // only works for the arrays where the the remaining numbers appears twice
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int result = 0;
//         for (auto it : nums) {
//             result ^= it;   // XOR cancels out pairs
//         }
//         return result;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for(auto x: nums){
            m[x]++;
        }

        for(auto x: m){
            if(x.second == 1){
                return x.first;
            }
        }
        
        return -1;
    }
};






