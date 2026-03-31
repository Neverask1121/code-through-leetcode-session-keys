class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // number of zeros

        for (int i = 0; i < n - count; i++) {
            if (nums[i] == 0) {
                // shift elements to the left
                for (int j = i; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                count++;
                i--; // stay at same index to check new element
            }
        }

        // push zeros at the end
        for (int i = n - count; i < n; i++) {
            nums[i] = 0;
        }
    }
};