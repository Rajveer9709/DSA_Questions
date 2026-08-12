class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int k = 0;

        for (int i = 0; i < n; i++) {
            swap(nums1[m+i], nums2[k]);
            k++;
        }

        sort(nums1.begin(), nums1.end());
    }
};