class Solution {
    public int romanToInt(String s) {
        int cur=0,rev=0,pre=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s.charAt(i)=='I'){
                cur=1;
            }
            if(s.charAt(i)=='V'){
                cur=5;
            }
            if(s.charAt(i)=='X'){
                cur=10;
            }
            if(s.charAt(i)=='L'){
                cur=50;
            }
            if(s.charAt(i)=='C'){
                cur=100;
            }
            if(s.charAt(i)=='D'){
                cur=500;
            }
            if(s.charAt(i)=='M'){
                cur=1000;
            }
            
            if(cur<pre){
                rev-=cur;
                pre=cur;
            }
            else{
                
                rev+=cur;
                pre=cur;
            }
        }
        return rev;
    }
}
