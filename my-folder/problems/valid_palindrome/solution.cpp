class Solution {
public:
    bool isPalindrome(string s) {
        int j = 0;
        string temp = "";
        for(char c : s){
            if(isalnum(c)){
                temp+=tolower(c);
            }
        }
        for(int i = (int)temp.length()-1 ; i >= (int)temp.length() / 2 ; i--){
            if(temp[i] != temp[j]){
                return false;
            }
            j++;
        }
        return true;
    }
};