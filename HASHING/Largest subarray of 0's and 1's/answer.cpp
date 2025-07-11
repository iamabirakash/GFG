class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> sumIndex;
        int sum = 0, maxLen = 0;
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = (arr[i] == 0) ? -1 : 1;
            sum += arr[i];
            if (sum == 0)
                maxLen = i + 1;
            else if (sumIndex.find(sum) != sumIndex.end())
                maxLen = max(maxLen, i - sumIndex[sum]);
            else
                sumIndex[sum] = i;
        }
        return maxLen;
    }
};
