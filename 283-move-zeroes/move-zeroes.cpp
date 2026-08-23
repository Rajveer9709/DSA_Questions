// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); ) {
//             if (nums[i] == 0) {
//                 nums.push_back(nums[i]);
//                 nums.erase(nums.begin() + i);
//             } else {
//                 i++;
//             }
//         }
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> copy;
//         int counter = 0;
//         for(auto it : nums){
//             if(it != 0){
//                 copy.emplace_back(it);
//             }
//             else{
//                 counter++;
//             }
//         }
//         for(int i=0; i<counter; i++){
//             copy.push_back(0);
//         }

//         nums = copy;
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1) return; 

        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

