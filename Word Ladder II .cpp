class Solution {
public:
    void dfs(string& start, string& end, map<string, set<string>>& adj, vector<vector<string>>& ans, vector<string>& tt){
        tt.push_back(start);
        if(start==end){
            ans.push_back(tt);
            tt.pop_back();
            return ;
        }
        for(auto str: adj[start]){
            dfs(str, end, adj, ans, tt);
        }
        tt.pop_back();
    }
    void solve(string start, string end, vector<string>& arr, vector<vector<string>>& ans){
        set<string> dict;
        for(auto i: arr){
            dict.insert(i);
        }
        if(dict.find(end)==dict.end()){
            return ;
        }
        map<string, set<string>> adj;
        queue<string> q;
        map<string, int> visited;
        q.push(start);
        visited[start] = 0;
        while(!q.empty()){
            string curr = q.front(); q.pop();
            string temp = curr;
            for(int j=0; j<curr.length(); j++){
                for(char i='a'; i<='z'; i++){
                    if(temp[j] == i){
                        continue;
                    }
                    temp[j] = i;
                    if(dict.count(temp) > 0){
                        if(visited.count(temp) == 0){
                            q.push(temp);
                            adj[curr].insert(temp);
                            visited[temp] = visited[curr] + 1;
                        }
                        else if(visited[temp] == visited[curr] + 1){
                            adj[curr].insert(temp);
                        }
                    }
                }
                temp[j] = curr[j];
            }
        }
        vector<string> tt;
        dfs(start, end, adj, ans, tt);
        return ;
    }

    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<string>> ans;
        solve(beginWord, endWord, wordList, ans);
        return ans;
    }
};
