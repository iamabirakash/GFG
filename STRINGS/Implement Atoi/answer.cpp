class Solution {
  public:
    int IMAX = (int) (pow(2, 31) - 1);
    int IMIN = (int) (-pow(2, 31));
    int myAtoi(string& s) {
        // code here
        int n = s.length();
        bool first = false;
        bool neg = false;
        long long res = 0;
        for(char ch : s){
            if(!first && ch==' ') continue;
            else if(!first && (ch=='-' || ch=='+')){
                neg = (ch=='-');
                first = true;
            }
            else if(ch=='0' && !first) continue;
            else if(!isdigit(ch)){
                break;
            }
            else {
                first = true;
                int num = ch-'0';
                res = res*10+num;
                if(!neg && res>IMAX) return IMAX;
                if(neg && -res<IMIN) return IMIN;
            }
        }
        return (neg)?-res:res;
    }
};
