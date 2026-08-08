class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int zero = 0;
        int n = nums.size();
        vector<int> answer;
        vector<int> arr(n, 0);
        for (auto it : nums) {

            product = product * it;
        }
        if (product != 0) {
            for (int i = 0; i < nums.size(); i++) {

                int element = product / nums[i];
                answer.push_back(element);
            }
            return answer;
        }

        if (product == 0) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    zero = i;
                    break;
                }
            }
            nums.at(zero) = 1;
            product = 1;
            for (auto it : nums) {
                product = product * it;
            }

            arr.at(zero) = product;
            return arr;
        }

        return {};
    }
};


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

        

//     }
// };