class Solution {
public:
    bool checkDivisibility(int n) {

        int sum = 0;
        int product = 1;
        int total = 0;
        int num = n;

        while (num != 0) {
            int remainder = num % 10;
            sum = sum + remainder;
            product = product * remainder;
            num = num / 10;
        }

        total = sum + product;

        if (n % total == 0) {
            return true;
        }
        return false;
    }
};