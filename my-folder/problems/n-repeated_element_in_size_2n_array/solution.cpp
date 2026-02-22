class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> v;
        for(int i = 0 ; i < nums.size() ; i++){
            v.insert(nums[i]);
            if(v.size() != i+1) return nums[i];
        }
        return 0;
    }
};