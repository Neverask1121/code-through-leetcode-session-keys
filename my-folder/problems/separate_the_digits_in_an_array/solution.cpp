class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        vector<int>temp;
        for(int i = 0 ; i < nums.size() ; i++){
            while(nums[i]!=0){
                int Number = nums[i]%10;
                temp.push_back(Number);
                nums[i]/=10;
            }
            for(int i=temp.size()-1 ; i>=0 ; i--){
                answer.push_back(temp[i]);
            }
            temp.clear();
        }
        return answer;
    }
};