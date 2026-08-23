class Solution {
public:
    bool isPalindromic(string s) {
        string binaryrepresentation;
        for(char c : s){
            bitset<8>bits(c);
            string binary = bits.to_string();
            binaryrepresentation += binary;
        }
        int n = binaryrepresentation.length();
        bool answer = true;
        for(int i = 0 ; i < n/2 ; i++){
            if(binaryrepresentation[i] != binaryrepresentation[n - i - 1]){
                answer = false;
            }
        }
        return answer;
    }
};