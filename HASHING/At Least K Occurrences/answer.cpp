class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // write code
        unordered_map<int,int> mp;
        for(int num : arr){
            mp[num]++;
            if(mp[num]==k){
                return num;
            }
        }
        return -1;
    }
};
