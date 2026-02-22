class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        long long firstScore = 0, secondScore = 0;
        bool firstActive = true;
        
        for (int i = 0; i < nums.size(); i++) {
            
            // Rule 1: If nums[i] is odd, swap
            if (nums[i] % 2 == 1) {
                firstActive = !firstActive;
            }
            
            // Rule 2: Every 6th game (i = 5, 11, 17, ...)
            if (i % 6 == 5) {
                firstActive = !firstActive;
            }
            
            // Active player gains points
            if (firstActive) {
                firstScore += nums[i];
            } else {
                secondScore += nums[i];
            }
        }
        
        return firstScore - secondScore;
    }
};