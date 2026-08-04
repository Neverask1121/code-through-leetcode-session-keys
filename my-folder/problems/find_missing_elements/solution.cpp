class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // int mi = *(min_element(nums.begin(),nums.end()));
        // int ma = *(max_element(nums.begin(),nums.end()));
        unordered_map<int,int> mp;
        int mi =    INT_MAX;
        int ma =    INT_MIN;
        for(int i=0;i<nums.size();++i)
        {
            mi = min(mi,nums[i]);
            ma = max(ma,nums[i]);
            mp[nums[i]]++;
        }
        vector<int> result;
        for(int i=mi;i<=ma;++i)
        {
            if(mp.find(i)==mp.end())
                result.push_back(i);
        }
        return result;
        
        // unordered_map<int,int> mp;
        
    }
};