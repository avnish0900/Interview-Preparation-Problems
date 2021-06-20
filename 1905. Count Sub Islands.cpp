class Solution {
public:
    void dfs(int i,int j, int n,int m,vector<vector<int>>& grid1, vector<vector<int>>& grid2, int& flag){
        if(i<0 or j<0 or i>=n or j>=m ) return ;
        if(grid2[i][j]==0) return ;
        if(grid1[i][j]==0) flag=0;
        grid2[i][j]=0;
        dfs(i+1,j,n,m,grid1,grid2,flag);
        dfs(i-1,j,n,m,grid1,grid2,flag);
        dfs(i,j+1,n,m,grid1,grid2,flag);
        dfs(i,j-1,n,m,grid1,grid2,flag);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans  =0;
        int n = grid1.size();
        int m = grid1[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    int flag=1;
                    dfs(i,j,n,m,grid1,grid2,flag);
                    ans+=flag;
                }
            }
        }
        return ans;
    }
};
