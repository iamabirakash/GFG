class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        stack<int> st;
        vector<int> visited(n,0);
        vector<int> dfs;
        st.push(0);
        while(!st.empty()){
            int u = st.top();
            st.pop();
            if(!visited[u]){
                visited[u] = 1;
                dfs.push_back(u);
            }
            for(auto it = adj[u].rbegin();it != adj[u].rend();it++){
                if(!visited[*it]){
                    st.push(*it);
                }
            }
        }
        return dfs;
    }
};
