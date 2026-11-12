class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int countinc = 0;
        int countdec = 0;
        int max_countinc = 0;
        int max_countdec = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[i-1]){
                countinc = 0;
                countdec = 0;
            }
            else if(nums[i]>nums[i-1]){
                countinc++;
                countdec = 0;
                max_countinc = max(max_countinc, countinc);
            }
            else{
                countdec++;
                countinc = 0;
                max_countdec = max(max_countdec, countdec);
            }
        }
        return max(max_countinc, max_countdec)+1;
    }
};
