class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int max_value = INT_MIN;
        int best = INT_MIN;
        for(int i=k ; i < n ; ++i){
            best = max(best, nums[i-k]);
            max_value = max(max_value, best + nums[i]);
        }
        return max_value;
    }
};