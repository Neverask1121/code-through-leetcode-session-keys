class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int>puh, clih;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                puh.insert(nums[i]^nums[j]);
            }
        }
        for(auto x : puh){
            for(auto y : nums){
                clih.insert(x^y);
            }
        }
        return clih.size();
    }
};