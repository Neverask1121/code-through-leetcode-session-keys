class Solution {
private:
    int solve(vector<int>&nums){
        int n = nums.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                unordered_set<int>temp;
                for(int k = i ; k <= j ; k++){
                    temp.insert(nums[k]);
                }
                int size = temp.size();
                ans += size*size;
            }
        }
        return ans;
    }
public:
    int sumCounts(vector<int>& nums) {
        return solve(nums);
    }
};