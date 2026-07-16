class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long answer = 0;
        int n = nums.size();
        vector<int> texas;
        int value = 0;
        for(int i = 0 ; i < n ; i++){
            value=max(value, nums[i]);
            texas.push_back(gcd(nums[i], value));
        }
        sort(texas.begin(), texas.end());
        int j = n-1;
        for(int i = 0 ; i < n/2 ; i++){
            answer += gcd(texas[i], texas[j]);
            j--;
        }
        return answer;
    }   
};