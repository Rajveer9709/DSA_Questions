class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {

        vector<int> arr1;
        vector<int> arr2;

        int n = nums.size();

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < n; i++) {
            int a1 = arr1.size();
            int a2 = arr2.size();
            if (arr1[a1 - 1] > arr2[a2 - 1]) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }
        int a = arr2.size();
        for (int i = 0; i < a; i++) {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};