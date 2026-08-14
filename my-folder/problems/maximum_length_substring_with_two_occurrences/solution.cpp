class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int max_num = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            unordered_map<char, int> count;
            int sum = 0;
            for(int j = i ; j < n ; j++){
                count[s[j]]++;
                sum++;
                if(count[s[j]] > 2){
                    sum = 0;
                }
                max_num = max(max_num, sum);
            }
        }
        return max_num;
    }
};