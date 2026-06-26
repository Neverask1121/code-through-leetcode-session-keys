class Solution {
public:
    string longestCommonPrefix(vector<string>& strings) {
        string result = strings[0];
        int n = strings.size();
        
        for(int i = 1; i < n; i++){  // Start from i=1 (skip comparing with itself)
            int j = 0;
            // Add boundary checks
            while(j < result.length() && j < strings[i].length() && result[j] == strings[i][j]){
                j++;
            }
            result = result.substr(0, j);
            
            // Early exit if empty
            if(result.empty()) break;
        }
        
        return result;
    }
};