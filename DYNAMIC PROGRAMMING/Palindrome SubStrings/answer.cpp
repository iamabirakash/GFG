class Solution {
  public:
    int countPS(string &s) {
        // code here
        int n = s.length();
        int count = 0;
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            dp[i][i] = true;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1] = true;
                count++;
            }
        }
        for(int i=3;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                int k = j+i-1;
                if(s[j]==s[k] && dp[j+1][k-1]){
                    dp[j][k] = true;
                    count++;
                }
            }
        }
        return count;
    }
};
