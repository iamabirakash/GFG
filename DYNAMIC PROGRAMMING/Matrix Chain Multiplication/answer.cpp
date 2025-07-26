class Solution {
  public:
    int mul(int i,int j,vector<vector<int>> &dp,vector<int> &arr){
        if(i+1==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int res = INT_MAX;
        for(int k=i+1;k<j;k++){
            int curr = mul(i,k,dp,arr)+mul(k,j,dp,arr)+arr[i]*arr[j]*arr[k];
            res = min(curr,res);
        }
        dp[i][j] = res;
        return res;
    }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return mul(0,n-1,dp,arr);
    }
};
