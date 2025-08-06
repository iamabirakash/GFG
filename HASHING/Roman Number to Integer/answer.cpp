class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char,int> mp = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int sum = 0;
        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            int currVal = mp[s[i]];
            int nextVal = mp[s[i+1]];
            if(currVal<nextVal){
                sum -= currVal;
            }else {
                sum += currVal;
            }
        }
        sum += mp[s[n-1]];
        return sum;
    }
};
