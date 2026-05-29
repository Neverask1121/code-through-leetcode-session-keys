class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> newarr;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum =0;
            while(nums[i]>0){
                sum += nums[i]%10;
                nums[i] /= 10;
            }
            newarr.push_back(sum);
        }
        sort(newarr.begin(), newarr.end());
        return newarr[0];
    }
};