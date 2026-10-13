class Solution {
private:
    long long solve(vector<int>&nums){
        int n = nums.size();
        vector<int>temp;
        for(int i = 0 ; i < n ; i++){
            temp.push_back(nums[i]*nums[i]);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        int mid;
        if(n % 2 == 0){
            mid = n / 2;
        }
        else{
            mid = n / 2 + 1;
        }
        long long ans = 0;
        for(int i = 0 ; i < mid ; i++){
            ans += temp[i];
        }
        for(int i = mid ; i < n ; i++){
            ans -= temp[i];
        }
        return ans;
    }
public:
    long long maxAlternatingSum(vector<int>& nums) {
        return solve(nums);
    }
};