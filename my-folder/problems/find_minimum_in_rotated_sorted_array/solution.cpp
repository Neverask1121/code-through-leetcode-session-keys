class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        //now array is sorted
        //we can implement the binary search technique
        // 0 1 2 3 4 5 6 7 8 
        return nums[0];
    }
};