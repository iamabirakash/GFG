class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string ss = "";
        for(char ch : s){
            if(isalnum(ch)){
                ss += tolower(ch);
            }
        }
        string rev = ss;
        reverse(ss.begin(),ss.end());
        return ss==rev;
    }
};
