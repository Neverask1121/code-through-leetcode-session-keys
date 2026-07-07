class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        long long sum = 0;
        vector<char>answer;
        for(int i = 0; i < str.length(); i++){
            if(str[i] != '0'){
                answer.push_back(str[i]);
                sum += (str[i] - '0');
            }
        }
        
        if(answer.empty()){
            return 0;  // No non-zero digits, product is 0
        }
        
        long long ans = sum * stoi(string(answer.begin(), answer.end()));
        return ans;
    }
};