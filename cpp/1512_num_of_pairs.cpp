class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        vector<int> temp_hash(101);
        for (int i = 0; i < nums.size(); i++)
            result += temp_hash[nums[i]]++;
        return result;
    }
};