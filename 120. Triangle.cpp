class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
        for (int i = arr.size()-2; i>=0; i--){
            for (int j = 0 ;j<arr[i].size();j++){
                int mn = min(arr[i+1][j], arr[i+1][j+1]);
                int sum = arr[i][j] + mn;
                arr[i][j] = sum;
            }
        }
        return arr[0][0];
    }
};
