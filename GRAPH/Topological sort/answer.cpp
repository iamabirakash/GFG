class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> inDegree(V,0);
        vector<vector<int>> adj(V);
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(inDegree[i]==0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            topo.push_back(u);
            for(int neigh : adj[u]){
                inDegree[neigh]--;
                if(inDegree[neigh] == 0){
                    q.push(neigh);
                }
            }
        }
        if((int)topo.size() == V){
            return topo;
        } else {
            return {};
        }
    }
};
