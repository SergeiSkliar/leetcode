class Solution {
public:
    unordered_set<int> exist;
    int nextNumber(int n){
        int sum = 0, temp = 0;
        while (n != 0){
            temp = n % 10;
            sum += temp*temp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n == 1)
            return true;
        //exist.insert(n);
        while (n != 1){
            n = nextNumber(n);
            if (exist.find(n) != exist.end())
                return false;
            exist.insert(n);
        }
        return true;
    }
};