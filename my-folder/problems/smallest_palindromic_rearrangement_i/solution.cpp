class Solution {
public:
string smallestPalindrome(string s) {
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    string left;
    char mid = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            if (mid != 0) return ""; // more than one odd → impossible
            mid = 'a' + i;
        }
        left.append(freq[i] / 2, 'a' + i);
    }

    string right = left;
    reverse(right.begin(), right.end());
    if (mid) left.push_back(mid);
    return left + right;
}
};