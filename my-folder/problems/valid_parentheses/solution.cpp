class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char>str;
        for(int i = 0 ; i < n ;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                str.push(s[i]);
            }
            else if(s[i] == ')' && !str.empty() && str.top() == '('){
                str.pop();
            }
            else if(s[i] == '}' && !str.empty() && str.top() == '{'){
                str.pop();
            }
            else if(s[i] == ']' && !str.empty() && str.top() == '['){
                str.pop();
            }
            else{
                return false;
            }
        }
        if(!str.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};