class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Store the frequency of each number
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // Convert to vector of pairs (number, frequency) for sorting
        vector<pair<int, int>> freqArray;
        for (auto& p : freq) {
            freqArray.push_back({p.first, p.second});
        }
        
        // Arrange the numbers in descending order according to frequency
        sort(freqArray.begin(), freqArray.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });
        
        // Take unique elements and store them in answer array
        vector<int> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(freqArray[i].first);
        }
        
        // Return the answer array
        return answer;
    }
};