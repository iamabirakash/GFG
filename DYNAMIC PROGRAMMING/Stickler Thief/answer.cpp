class Solution {
  public:
    int maxSum(vector<int>& arr,int idx,vector<int>& dp){
        if(idx>=arr.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int steal = arr[idx] + maxSum(arr,idx+2,dp);
        int skip = maxSum(arr,idx+1,dp);
        return dp[idx] = max(steal,skip);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n,-1);
        return maxSum(arr,0,dp);
    }
};
