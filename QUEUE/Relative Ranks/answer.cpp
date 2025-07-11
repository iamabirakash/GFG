class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> scores;
        int n = score.size();
        for (int i = 0; i < n; i++) {
            scores.push({score[i], i});
        }
        vector<string> result(n, "");
        for (int i = 0; i < n; i++) {
            pair<int, int> o = scores.top();
            scores.pop();
            if (i == 0) {
                result[o.second] = "Gold Medal";
            } else if (i == 1) {
                result[o.second] = ("Silver Medal");
            } else if (i == 2) {
                result[o.second] = ("Bronze Medal");
            } else {
                result[o.second] = (to_string(i + 1));
            }
        }
        
        return result;
    }
};
