class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        vector<int> res(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i] = st.top();
            } else {
                res[i] = -1;
            }
            st.push(arr[i]);
        }
        return res;
    }
};
