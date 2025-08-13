class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int no = (n+1)/2;
        int mincnt = 0;
        int cnt = 0;
        vector<int> cost;
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                cnt++;
            } else {
                cost.push_back((k -(arr[i]%k))%k);
            }
        }
        sort(cost.begin(),cost.end());
        int i = 0;
        while(cnt<no && i<cost.size()){
            mincnt += cost[i];
            cnt++;
            i++;
        }
        return mincnt;
    }
};
