class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: store sorted array
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        // Step 2: rotate n times and check
        for (int i = 0; i < n; i++) {
            if (nums == sorted) return true;
            
            // rotate left by 1
            rotate(nums.begin(), nums.begin() + 1, nums.end());
        }
        
        // Step 3: if no match found
        return false;
    }
};