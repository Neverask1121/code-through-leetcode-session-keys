class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>smaller;
        vector<int>bigger;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]< pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                bigger.push_back(nums[i]);
            }
        }
        vector<int>result;

        for(int i = 0 ; i < smaller.size() ; i++){
            result.push_back(smaller[i]);
        }

        int no_of_piv = nums.size() - smaller.size() - bigger.size();

        for(int i = 0 ; i < no_of_piv ; i++){
            result.push_back(pivot);
        }

        for(int i = 0 ; i < bigger.size() ; i++){
            result.push_back(bigger[i]);
        }
        return result;
    }
};