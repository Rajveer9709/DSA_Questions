class Solution {
public:
    int countDigits(int num) {

        int n = num;
        int result = 0;

        int freq[10] = {0};
        while (n != 0) {
            int rem = n % 10;
            freq[rem]++;
            n = n / 10;
        }

        for (int i = 1; i < 10; i++) {
            if (num % i == 0) {
                result = result + freq[i];
            }
        }

        return result;
    }
};