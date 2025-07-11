class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int maxlen = 1;
        int cnt = 1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==arr[i+1]){
                continue;
            } else if(arr[i]+1==arr[i+1]){
                cnt++;
            } else {
                maxlen = max(maxlen,cnt);
                cnt = 1;
            }
        }
        maxlen = max(maxlen, cnt);
        return maxlen;
    }
};
