class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (char c : address){
            if (c == '.') result += "[.]";
            else result += c;
        }
        return result;
    }
};