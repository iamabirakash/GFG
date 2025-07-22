//Back-end complete function Template for C++

class Solution {
  public:
    int minSteps(vector<int>& cost,int idx,vector<int>& dp){
        if(idx>=cost.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        
        
        return dp[idx] =  cost[idx] + min(minSteps(cost,idx+1,dp),minSteps(cost,idx+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        vector<int> dp(cost.size(),-1);
        return min(minSteps(cost,0,dp),minSteps(cost,1,dp));
    }
};
