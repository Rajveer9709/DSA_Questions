class Solution {
public:
    int smallestNumber(int n, int t) {       
        int product = 1;
        int rem = 0;

        while (product % t != 0) {
            product = 1;              
            int temp = n;
            while (temp != 0) {
                rem = temp % 10;
                product = product * rem;
                temp = temp / 10;
            }
            if (product % t != 0) {
                n++;
            }
        }
        return n;
    }
};