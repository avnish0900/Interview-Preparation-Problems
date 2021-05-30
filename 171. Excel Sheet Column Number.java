class Solution {
    public int titleToNumber(String columnTitle) {
        int code=0;
        for(int i=0;i<columnTitle.length();i++){
            code=code*26 + ( (int)(columnTitle.charAt(i)-'A'))+1;
        }
        return code;
    }
}
