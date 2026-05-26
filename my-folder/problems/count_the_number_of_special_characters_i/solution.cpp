class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>low(26), upp(26);
        string res = "";
        for(auto it : word){
            if(it-'A'>=0 && it - 'A'<26){
                upp[it-'A']++;
            }
            else{
                low[it-'a']++;
            }
        }
        int number = 0; 
        for(int i = 0 ; i < 26 ; i++){
            if(low[i] && upp[i]){
                number++;
            }
        }
        
        return number;
    }
};