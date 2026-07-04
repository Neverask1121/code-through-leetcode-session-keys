class Solution {
public:
    int minOperations(string s1, string s2) {
        int ans;
        if(s1 == s2){
            ans = 0;
            return ans;
        }
        else if(s1.length() == 1){
            if(s1 == "0" && s2 == "1")ans =1;
            else if(s1 == "1" && s2 == "0") ans = -1;
            return ans;
        }
        else{
            int n = s1.length();
            int diddy = 0;
            for(int i = 0 ; i < n ; i++){
                if(s2[i] == '1') diddy ++;
                if(s1[i] == '1') diddy --;
            }
            int bosnia = 0;
            int i = 0;
            while(i < n){
                if(s1[i] == '1' && s2[i] == '0'){
                    int j = i;
                    while(j < n && s1[j] == '1' && s2[j] == '0'){
                        j++;
                    }
                    int length_bro = j - i;
                    bosnia+=(length_bro+1)/2;
                    i = j;
                }else{
                    i++;
                }
                ans = diddy + 3 * bosnia;
            }
            // for(int i = 0 ; i < s1.length() ; i++){
            //     if(s1[i] != s2[i]){
            //         if(s1[i] == 1 && s1[i+1] == 1){
            //             count++;
            //             i+=2;
            //         }
            //         else if(s1[i] == 0 && s1[i+1] == 1 && s1[i] != s2[i] && s1[i+1] != s2[i+1]){
            //             count+=3;
            //             i+=2;
            //         }
            //     }
            // }
            return ans;
        }
        
    }
};