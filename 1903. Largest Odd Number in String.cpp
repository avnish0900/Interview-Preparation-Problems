class Solution {
public:
    string largestOddNumber(string nums) {
        string ans;
        for(int i=nums.length()-1;i>=0;i--){
            if(nums[i]=='1' or nums[i]=='3' or nums[i]=='5' or nums[i]=='7' or nums[i]=='9'){
                ans = nums.substr(0,i+1);
                return ans;
            }
        }
        return ans;
    }
};
