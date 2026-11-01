class Solution {
private:
    int solve(vector<int>&nums){
        int min_val = *min_element(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            count += abs(min_val - nums[i]);
        }
        return count;
    }
public:
    int minMoves(vector<int>& nums) {
        return solve(nums);
    }
};
