class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums_nums;
        for(int i = 0 ; i < nums.size() ; i++){
            nums_nums.push_back(nums[i]);
        }
        for(int i = 0 ; i < nums.size() ; i++){
            nums_nums.push_back(nums[i]);
        }
        return nums_nums;
    }
};