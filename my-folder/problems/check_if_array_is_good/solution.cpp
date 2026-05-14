class Solution {
public:
    bool isGood(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int j = 1, count = 0;
        for(int i = 0 ; i < size-1 ; i++){
            if(j != nums[i]){
                count += 1;
            }
            j++;
        }
        if(size-1 != nums[size-1]){
            count += 1;
        }
        if(count == 0){
            return true;
        }
        return false;
    }
};