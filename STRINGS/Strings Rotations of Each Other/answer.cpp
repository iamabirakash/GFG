class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        for(char ch : s1){
            mp1[ch]++;
        }
        for(char ch : s2){
            mp2[ch]++;
        }
        if(mp1!=mp2) return false;
        string temp = s1 + s1;
        return temp.find(s2) != string::npos;
    }
};
