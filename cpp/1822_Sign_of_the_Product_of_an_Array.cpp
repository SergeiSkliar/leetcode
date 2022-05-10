class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i != nums.size(); ++i){
            if (nums[i] == 0)
                return 0;
            else if (nums[i] < 0)
                ++count;
        }
        return (count % 2 == 0) ? 1 : -1;
    }
};



// just for history - code below failed with
// [9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24] case

/*class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product = 1;
        for (const auto& e : nums){
            product *= e;
        }
        if (product == 0)
            return 0;
        else if (product > 1)
            return 1;
        else
            return -1;
    }
};
*/
