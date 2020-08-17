class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> greatestNumber;
    int largest = 0;   
    for(int i = 0;i < candies.size(); i++)
    {
           largest = max(largest, candies[i]);
    }
    for (int i = 0; i < candies.size(); i++){
//      int current = candies[i] + extraCandies; // you can use extra variable
        if (candies[i] + extraCandies < largest) {
            greatestNumber.push_back(false);
        }
        else {
            greatestNumber.push_back(true);
        }
        }
    return greatestNumber;
    }
};