class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> us;
        vector<int> res;
        for(int num : a){
            us.insert(num);
        }
        for(int num : b){
            us.insert(num);
        }
        for(int num : us){
            res.push_back(num);
        }
        return res;
        
    }
};
