class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompress;
        for (int i = 0; 2*i + 1 < nums.size(); i++) {
            int a = nums[2*i];
            int b = nums[2*i + 1];
                while (a--)
                    decompress.push_back(b);
        }
        return decompress;
    }
};
