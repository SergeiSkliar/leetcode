class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(n * 2);
        for (int i = 0; i < n * 2; i++)
            result[i] = nums[i/2 + n * (i%2)];
        return result;
    }
};