class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        
        for(int i = 0; i < n; i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int one = st.top();
                st.pop();
                int two = st.top();
                st.pop();
                
                if(tokens[i] == "+"){
                    st.push(two + one);
                }
                else if(tokens[i] == "-"){
                    st.push(two - one);
                }
                else if(tokens[i] == "*"){
                    st.push(two * one);
                }
                else if(tokens[i] == "/"){
                    st.push(two / one);
                }
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};