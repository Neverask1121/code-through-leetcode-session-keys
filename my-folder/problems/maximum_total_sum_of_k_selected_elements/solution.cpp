class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();
        long long sum = 0;
        for(int i = 0 ; i < min(k, (int)nums.size()) ; i++){
                
            if(mul == 1){
                sum += nums[i];
                continue;
            }
            sum += 1LL * nums[i] * mul;
            mul--;
        }
        return sum;
    }
};