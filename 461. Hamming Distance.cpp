class Solution {
public:
    string decimalToBinary(int n){
        string s = bitset<64> (n).to_string();
        return s;
    }
    int hammingDistance(int x, int y) {
        string a = decimalToBinary(x);
        string b = decimalToBinary(y);
        int ans = 0;
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                ans++;
            }
        }
        return ans;
    }
};
