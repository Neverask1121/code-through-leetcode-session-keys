#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(128, 0);
        
        for (char c : s) {
            freq[c]++;
        }

        int matched = 0;

        for (char c : s) {
            if (freq[c] == 0) continue;

            char mirror;
            if (isalpha(c)) {
                mirror = 'z' - (c - 'a');
            } else if (isdigit(c)) {
                mirror = '9' - (c - '0');
            } else continue;

            if (freq[mirror] > 0) {
                if (c == mirror) {
                    if (freq[c] >= 2) {
                        freq[c] -= 2;
                        matched += 2;
                    }
                } else {
                    freq[c]--;
                    freq[mirror]--;
                    matched += 2;
                }
            }
        }

        return s.length() - matched;
    }
};