#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        map<int, int> r;
        vector<int> rr;
        for (int i = 0; i < len; i++) {
            if (r.find(nums[i]) == r.end()) {
                r[nums[i]] = i;
            }
            int j, num = target - nums[i];
            if ((r.find(num) != r.end()) && ((j = r[num]) < i)) {
                rr.push_back(j);
                rr.push_back(i);
                return rr;
            }
        }
        return rr;
    }
};
