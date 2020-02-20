class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for (int i = s.size() - 1; i>=0; --i){
            result += (s[i] - 'A' + 1) * pow(26, s.length() - 1 -i);
        }
    return result;
    }
};
