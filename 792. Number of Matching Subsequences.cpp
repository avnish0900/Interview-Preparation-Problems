class Solution {
public:
    bool same (string a, string b){
        int j =0;
        for(int i=0;i<a.length() and j<b.length();i++){
            if(a[i]==b[j]){
                j++;
            }
        }
        if(j==b.length()){
            return true;
        }
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans = 0;
        unordered_map<string, bool> m;
        for(string i: words){
            if(m.find(i)!=m.end()){
                if(m[i]==true){
                    ans++;
                }
            }
            else{
                bool is = same(s, i);
                m[i] = is;
                if(is){
                    ans++;
                }
            }
        }
        return ans;
    }
};
