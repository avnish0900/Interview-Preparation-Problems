class Solution {
public:
string solve(string str){
    string newstr = "";
    for(char ch: str){
        int digit = ch - 'a';digit++;
        newstr += to_string(digit);
    }
    return newstr;
}


string summ(string str){
    int sum = 0;
    for(char ch: str){
        int digit = ch - '0';digit++;
        sum += digit;
    }
    string newstr = to_string(sum);
    return newstr;
}


int solve(string str, int k){
    string newstr = solve(str);
    int ans = 0;
    for(int i=0; i<k; i++){
        ans = 0;
        for(char ch: newstr){
            int digit = ch - '0';
            ans += digit;
        }
        newstr = to_string(ans);
    }
    return ans;
}
    
    int getLucky(string s, int k) {
        return solve(s, k);
    }
};
