class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long size = nums.size();
        long long maximum_number = nums[size-1];
        long long minimum_number = nums[0];
        return (maximum_number-minimum_number) * k;
    }
};