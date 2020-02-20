class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool isJewel[500] = {false, };
        for (int i = 0; i < J.length(); i++){
            isJewel[J[i]] = true;

        }
        int count = 0;
        for (int i = 0; i < S.length(); i++){
            count += int(isJewel[S[i]]);
            }
        return count;
    }
};
