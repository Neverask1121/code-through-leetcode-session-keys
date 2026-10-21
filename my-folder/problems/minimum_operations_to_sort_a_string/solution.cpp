class Solution {
public:
    int minOperations(string s) {
       
        int si=s.length();
        bool che=true;
        for(int i=1;i<si;i++){
            if(s[i-1]>s[i]){
                che=false;
                break;
            }
        }
        if(che)
            return 0;
         if(s.length()==2)
            return -1;
        char min=*min_element(s.begin(),s.end());
        char max=*max_element(s.begin(),s.end());
        if(s[0]==min || s[si-1]==max)
            return 1;
        for(int i=1;i<si-1;++i){
            if(s[i]==max || s[i]==min)return 2;
        }
        return 3;
        
    }
};