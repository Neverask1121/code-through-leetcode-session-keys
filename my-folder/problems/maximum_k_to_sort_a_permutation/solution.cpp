class Solution {
private:
    int solve(vector<int>&nums){
        int n = nums.size();
        int j = 0;
        int answer = 0;
        for(int i = 0 ; i < n ; i++){
            if(j == 0 && nums[i] != i){
                answer = nums[i] & nums[i];
                j++;
            }
            if(j != 0 && nums[i] != i){
                answer = nums[i] & answer;
            }
        }
        return answer;
    }
public:
    int sortPermutation(vector<int>& nums) {
        return solve(nums);
    }
};