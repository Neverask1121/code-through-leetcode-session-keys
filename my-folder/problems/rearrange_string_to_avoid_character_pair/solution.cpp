class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.length();
        string one;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == y){
                one += s[i];
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(s[i] != y){
                one += s[i];
            }
        }
        return one;
    }
};