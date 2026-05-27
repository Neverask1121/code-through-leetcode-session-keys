class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Track last occurrence of lowercase and first occurrence of uppercase
        vector<int> lastLower(26, -1);   // last index of lowercase
        vector<int> firstUpper(26, -1);  // first index of uppercase
        
        for(int i = 0; i < word.length(); i++) {
            char c = word[i];
            if(islower(c)) {
                lastLower[c - 'a'] = i;  // update last occurrence
            } else {
                if(firstUpper[c - 'A'] == -1) {
                    firstUpper[c - 'A'] = i;  // track first occurrence
                }
            }
        }
        
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            // Special if: both exist AND all lowercase before first uppercase
            if(lastLower[i] != -1 && firstUpper[i] != -1 && lastLower[i] < firstUpper[i]) {
                ans++;
            }
        }
        return ans;
    }
};