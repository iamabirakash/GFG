class Solution {
  public:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited, int n, int m) {
        visited[i][j] = true;

        // All 8 directions
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for (int d = 0; d < 8; ++d) {
            int ni = i + dx[d];
            int nj = j + dy[d];

            if (ni >= 0 && ni < n && nj >= 0 && nj < m && 
                !visited[ni][nj] && grid[ni][nj] == 'L') {
                dfs(ni, nj, grid, visited, n, m);
            }
        }
    }

    int countIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int islandCount = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 'L' && !visited[i][j]) {
                    dfs(i, j, grid, visited, n, m);
                    ++islandCount;
                }
            }
        }

        return islandCount;
    }
};
