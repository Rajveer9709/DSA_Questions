// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int min = prices[0];
//         int min_index = 0;
//         for (int i = 0; i < prices.size(); i++) {
//             if (prices[i] < min) {
//                 min = prices[i];
//                 min_index = i;
//             }
//         }

//         int max = *max_element(prices.begin() + min_index, prices.end());

//         return max - min;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }
};


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int n = prices.size();
//         int profit = 0;
//         for (int i = n - 1; i >= 0; i--) {
//             int min = *min_element(prices.begin(), prices.begin() + i);
//             int current_profit = prices[i] - min;
//             if (min < price[i] && current_profit > profit){
//                 return current pro
//             }
//         }
//     }
// };