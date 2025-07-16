class Solution {
  public:
    void dfs(int node, vector<bool>& visited, vector<int> adj[], vector<int>& component) {
        visited[node] = true;
        component.push_back(node);
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited, adj, component);
            }
        }
    }

    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);  // since undirected
        }

        vector<bool> visited(V, false);
        vector<vector<int>> components;

        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                vector<int> component;
                dfs(i, visited, adj, component);
                sort(component.begin(), component.end());
                components.push_back(component);
            }
        }

        return components;
    }
};
