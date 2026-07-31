class Solution {
public:
    int minimumPushes(string word) {
        // 1. Count frequencies
        map<char, int> freq;
        for (char ch : word) freq[ch]++;

        // 2. Extract counts and sort descending
        vector<int> counts;
        for (auto& p : freq) counts.push_back(p.second);
        sort(counts.begin(), counts.end(), greater<int>());

        // 3. Calculate minimum pushes
        int ans = 0;
        for (int i = 0; i < counts.size(); ++i) {
            // i = 0..7  -> cost 1
            // i = 8..15 -> cost 2, etc.
            int pushes = 1 + i / 8;
            ans += counts[i] * pushes;
        }
        return ans;
    }
};