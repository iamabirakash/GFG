class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int totSum = arr[0], maxSum = arr[0], currMax = arr[0], minSum = arr[0], currMin = arr[0];
        for(int i=1;i<n;i++){
            currMax = max(arr[i],arr[i]+currMax);
            maxSum = max(currMax,maxSum);
            currMin = min(arr[i],arr[i]+currMin);
            minSum = min(currMin,minSum);
            totSum += arr[i];
        }
        if(maxSum<0) return maxSum;
        return max(maxSum,totSum-minSum);
    }
};
