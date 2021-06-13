class Solution {
public:
    int dp[501][501];
    int dfs(string aa,string bb,int i,int j){
        if(i==-1){
            return j+1;
        }
        if(j==-1){
            return i+1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(aa[i]==bb[j]){
            dp[i][j] = dfs(aa,bb,i-1,j-1);
            return dp[i][j];
        }
        int a = dfs(aa,bb,i-1,j-1);
        int b = dfs(aa,bb,i-1,j);
        int c = dfs(aa,bb,i,j-1);
        dp[i][j] = 1+ min(a,min(b,c));
        return dp[i][j];
    }
    int minDistance(string aa, string bb) {
        dp[aa.length()][bb.length()];
        memset(dp,-1,sizeof(dp));
        return dfs(aa,bb,aa.length()-1,bb.length()-1);
    }
};
