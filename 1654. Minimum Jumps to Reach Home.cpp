class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_set<int> no(forbidden.begin(), forbidden.end());
        vector<vector<int>>vis (2, vector<int>(7000));
        queue<pair<int,bool>> q;
        q.push({0, false});
        int ans =0;
        vis[0][0] = 1;
        vis[1][0] = 1;
        while(!q.empty()){
            int sz = q.size();
            while(sz>0){
                sz--;
                auto top = q.front();q.pop();
                if(top.first == x){
                    return ans;
                }
                int right = top.first + a;
                int left = top.first - b;
                if(right < 7000 and vis[0][right]==0 and no.find(right)==no.end()){
                    cout<<right<<" ";
                    q.push({right,false});
                    vis[0][right]=1;
                }
                if(left >=0 and vis[1][left]==0 and no.find(left)==no.end() and top.second==false){
                    cout<<left;
                    q.push({left,true});
                    vis[1][left]=1;
                }
                cout<<endl;
            }
            ans++;
        }
        return -1;
    }
};
