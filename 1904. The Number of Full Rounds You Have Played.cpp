class Solution {
public:
    int numberOfRounds(string st, string ft) {
        string hr = st.substr(0,2);
        string mn = st.substr(3);
        string fhr = ft.substr(0,2);
        string fmn = ft.substr(3);
         int x = stoi(hr);
        int y= stoi(mn);
         int a = stoi(fhr);
            int b= stoi(fmn);
        if((x>a) or ((x==a and (y>b)))){
            int tym  = (24-x)*60;
            for(int i=1;i<=60;i++){
                
                // debug(y);
                if(y%15==0){
                    break;
                }
                y+=1;
            }
            // debug(y);
            tym -= y;
            tym += (a*60);
            tym+=b;
            int ans = tym/15;
            // yes;
            return ans;
        }
        else{
            int tym  = (a-x)*60;
            for(int i=1;i<=60;i++){
               
                // debug(y);
                if(y%15==0){
                    break;
                }
                 y+=1;
            }
            // debug(y);
            tym -= y;
            tym+=b;
            int ans = tym/15;
            // no;
            // debug(tym);
            return ans;
        }
    }
};
