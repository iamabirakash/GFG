class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        int n = s1.length();
        int m = s2.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            mp1[s1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[s2[i]]++;
        }
        if(mp1==mp2) return true;
        else return false;
    }
};
