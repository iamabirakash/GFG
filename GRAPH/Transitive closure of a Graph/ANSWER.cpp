//Back-end complete function Template for C++

class Solution {
  public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph) {
        // code here
        for(int i=0;i<N;i++){
            graph[i][i] = 1;
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                for(int k=0;k<N;k++){
                    if(graph[j][i] && graph[i][k]){
                        graph[j][k] = 1;
                    }
                }
                // if(i==j){
                //     graph[i][j] = 1;
                // }
                // // if(i==N-1){
                // //     graph[N][N-1] = 1;
                // // }
                // if(i<N-1 && graph[i][j]==1){
                //     if(graph[i+1][j]==1 && graph[i+1][j+1]){
                //         graph[i][j+1] = 1;
                //     }
                // }
            }
        }
        return graph;
    }
};
