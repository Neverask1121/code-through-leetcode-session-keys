class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Get unique sorted elements using set
        set<int> uniqueElements(arr.begin(), arr.end());
        
        // Create a map: value -> rank
        unordered_map<int, int> rankMap;
        int rank = 1;
        for (int elem : uniqueElements) {
            rankMap[elem] = rank++;
        }
        
        // Replace each element with its rank
        vector<int> result(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            result[i] = rankMap[arr[i]];
        }
        
        return result;
    }
};