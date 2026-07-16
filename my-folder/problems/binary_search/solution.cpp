class Solution {
private:
    int process(vector<int>& nums, int low, int high, int target){
        if(low >= high) return -1;
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            return process(nums, low, mid, target);
        }
        else if(nums[mid] < target){
            return process(nums, mid + 1, high, target);
        }   
        return -1;     
    }

public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int answer = process(nums, 0, n, target);
        return answer;
    }
};