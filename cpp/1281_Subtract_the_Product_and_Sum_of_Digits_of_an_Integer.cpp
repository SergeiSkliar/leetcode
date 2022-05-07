class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int remainder;
        while (n != 0)
        {
            sum = sum + n % 10;
            remainder = n % 10;
            product = product * remainder;
            n /= 10;
        }
        return product - sum;
    }
};