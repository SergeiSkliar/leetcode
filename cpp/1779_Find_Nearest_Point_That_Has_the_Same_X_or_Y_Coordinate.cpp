class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minDist = INT_MAX;
        int index = -1;
        for (int i = 0; i != points.size(); ++i){
            vector<int> valid = points[i];
            if (x == valid[0] || y == valid[1]){
                int ManhDist = abs(x - valid[0]) + abs(y - valid[1]);
                if (ManhDist < minDist){
                    minDist = ManhDist;
                    index = i;
                }
            }
        }
        return index;
    }
};