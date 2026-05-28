class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0 ; i < strs[0].length() ; i++){
            char c = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j ++){
                if(i >= strs[j].length() || c != strs[j][i]){
                    return res;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};