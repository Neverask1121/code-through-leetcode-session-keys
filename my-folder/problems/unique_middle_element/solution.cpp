class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int k = nums.size()/2;
        int middle = nums[k];
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(middle == nums[i]){
                count++;
            }
        }
        if(count == 1){
            return true;
        }
        else{
            return false;
        }
    }
};