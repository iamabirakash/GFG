// User function Template for C++

class Solution {
  public:
    void gen(string ss,int num,vector<string>& s){
        if(ss.size()==num){
            s.push_back(ss);
            return;
        }
        gen(ss+'0',num,s);
        if(ss.empty() || ss.back()!='1'){
            gen(ss+'1',num,s);
        }
    }
    vector<string> generateBinaryStrings(int num) {
        // Write yourew
        vector<string> s;
        gen("",num,s);
        return s;
    }
};
