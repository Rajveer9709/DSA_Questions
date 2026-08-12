// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

//         int n1 = nums1.size();
//         int n2 = nums2.size();

//         if (n1 < n2) {
//             for (int i = 0; i < n1; i++) {
//                 if (nums1[i].count(nums2)) {
//                     result.push_back(nums1[i]);
//                 }
//             }
//         }
//         if (n2 < n1) {
//             for (int i = 0; i < n2; i++) {
//                 if (nums2[i].count(nums1)) {
//                     result.push_back(nums2[i]);
//                 }
//             }
//         }
//     }
// };

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        // build frequency map from the shorter array
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);  // swap so nums1 is always shorter
        }

        unordered_map<int, int> mpp;
        for (int x : nums1) {
            mpp[x]++;
        }

        for (int x : nums2) {
            if (mpp.count(x) && mpp[x] > 0) {
                result.push_back(x);
                mpp[x]--;
            }
        }

        return result;
    }
};