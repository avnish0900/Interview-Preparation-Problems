class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, int color){
        grid[row][col] = -grid[row][col];
        int count = 0;
        int dir[][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        for(int i=0; i<4; i++){
            int r = row + dir[i][0];
            int c = col + dir[i][1];
            if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or abs(grid[r][c])!=color){
                continue;
            }
            count++;
            if(grid[r][c]==color){
                dfs(grid, r, c, color);
            }
        }
        if(count == 4){
            grid[row][col] = color;
        }
        return ;
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(grid, row, col, grid[row][col]);
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] < 0){
                    grid[i][j] = color;
                }
            }
        }
        return grid;
    }
};
