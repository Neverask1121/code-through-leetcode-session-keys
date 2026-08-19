class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mymap;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, bool> seen;

            for (int j = i; j < i + k; j++) {
                if (!seen[nums[j]]) {
                    mymap[nums[j]]++;
                    seen[nums[j]] = true;
                }
            }
        }

        int answer = -1;

        for (const auto& x : mymap) {
            if (x.second == 1) {
                answer = max(answer, x.first);
            }
        }

        return answer;
    }
};