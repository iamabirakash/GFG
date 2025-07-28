class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> visited(n,0);
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            bfs.push_back(u);
            for(int i : adj[u]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        return bfs;
    }
};
