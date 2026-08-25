class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        set<int> st(nums.begin(), nums.end());

        int multiple = k;
        int n = nums.size();
        int counter = 0;

        while (counter <= n) {
            if (st.find(multiple) != st.end()) {
                multiple = multiple + k;
                counter++;
            } else {
                break;
                return multiple;
            }
        }
        return multiple ;
    }
};