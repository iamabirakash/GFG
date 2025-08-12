// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int n = s1.length()-1;
        int m = s2.length()-1;
        string res = "";
        int carry = 0;
        while(n>=0 || m>=0 || carry){
            // int sum = 0;
            int sum = carry;
            if(n>=0){
                sum += s1[n]-'0';
                n--;
            }
            if(m>=0){
                sum += s2[m]-'0';
                m--;
            }
            res += (sum%2)+'0';
            carry = sum/2;
        }
        reverse(res.begin(),res.end());
        int pos = res.find_first_not_of('0');
        if (pos != string::npos)
            return res.substr(pos);
        return "0";
    }
};
