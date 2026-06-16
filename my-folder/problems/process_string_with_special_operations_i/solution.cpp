class Solution {
public:
    string processStr(string s) {
        string result;

        for (char c : s) {
            if (isalpha(static_cast<unsigned char>(c))) {
                result.push_back(c);
            }
            else if (c == '*') {
                if (!result.empty())
                    result.pop_back();
            }
            else if (c == '#') {
                result += result;   // duplicate entire string
            }
            else if (c == '%') {
                reverse(result.begin(), result.end());
            }
        }

        return result;
    }
};