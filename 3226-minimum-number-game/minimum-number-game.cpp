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


#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

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