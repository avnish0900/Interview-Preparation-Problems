class Solution {
public:
    
    void dfs(vector<vector<int>> &image,int sr,int sc,int i,int j,int newColor,int source){
        if(sr<0 || sc<0 || sr>=i || sc>=j ){
            return ;
        }
        if(source!=image[sr][sc]){
            return ;
        }
        image[sr][sc]=newColor;
        dfs(image, sr+1, sc,i,j,newColor,source);
        dfs(image, sr-1, sc,i,j,newColor,source);
        dfs(image, sr, sc+1,i,j,newColor,source);
        dfs(image, sr, sc-1,i,j,newColor,source);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int source = image[sr][sc];
        if(source==newColor){
            return image;
        }
        int i = image.size();
        int j = image[0].size();
        dfs(image,sr,sc,i,j,newColor,source);
        return image;
    }
};
