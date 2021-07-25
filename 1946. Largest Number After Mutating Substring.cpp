class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string ans = num;
        bool streak = false;
        for(int i=0; i<num.length(); i++){
            char ch = num[i];
            int old_digit = ch - '0';
            int new_digit = change[old_digit];
            if(new_digit > old_digit){
                ans[i] = new_digit + '0';
                streak = true;
                continue;
            }
            if(new_digit == old_digit){
                continue;
            }
            else{
                if(streak == true){
                    break;
                }
                else{
                    
                }
            }
        }
        return ans;
    }
};
