class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int j = 1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(n % j == 0){
                ans = ans + nums[i]*nums[i]; 
            }
            j++;
        }
        return ans;
    }
};