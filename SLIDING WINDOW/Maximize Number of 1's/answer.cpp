class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int i=0,j=0;
        int zero_count=0,one_count=0;
        int ans=0;
        
        int n=arr.size();
        while(j<n){
            if(arr[j]==1) one_count++;
            else zero_count++;
            
            if(zero_count<=k){
                j++;
                ans=max(ans,(k!=0 ? zero_count : 0)+one_count);
            }
            else {
                while(i<j && zero_count>k){
                    if(arr[i]==0) zero_count--;
                    else one_count--;
                    i++;
                }
                ans=max(ans,(k!=0 ? zero_count : 0)+one_count);
                j++;
            }
        }
        
        return ans;
    }
};
