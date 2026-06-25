class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            int frq = 0;
            for(int j = i ; j < n ; j++){
                if(nums[j] == target){
                    frq++;
                }
                int len = j - i  + 1;
                if(frq>len/2){
                    count++;
                }
            }
        }
        return count;
    }
};