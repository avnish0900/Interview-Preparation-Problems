class Solution {
public:
    int cnt[100005][101];
    vector<int> minDifference(vector<int>& a, vector<vector<int>>& q) {
        int n=a.size();
        for(int i=1;i<=n;++i) {
            for(int j=1;j<=100;++j) cnt[i][j]=cnt[i-1][j];
            cnt[i][a[i-1]]++;
        }
        
        vector<int> ans(q.size());
        for(int j=0;j<q.size();++j) {
            int l=q[j][0],r=q[j][1];
            int lst=-1e9,anss=1e9;
            for(int i=1;i<=100;++i) {
                if(cnt[r+1][i]!=cnt[l][i]) {
                    anss=min(anss,i-lst);
                    lst=i;
                }
            }
            ans[j]=(anss==1e9?-1:anss);
        }
        return ans;
    }
};
