class Solution {
public:
    int cs_sum(vector<int> &nums,int l, int mid, int r)
    {
        int ml = INT_MIN;
        int ls = 0;
        for(int i=mid;i>=l;--i)
        {
            ls+=nums[i];
            ml = max(ml,ls);
        }

        int mr = INT_MIN;
        int rs = 0;
        for(int i =mid+1;i<=r;++i)
        {
            rs+=nums[i];
            mr = max(mr,rs);
        }

        return mr+ml;
    }
    int max_cal(vector<int> &nums,int l ,int r)
    {
        int mid = (l+r)/2;
        if(l<r)
        {

            int l_sum = max_cal(nums,l,mid);
            int r_sum = max_cal(nums,mid+1,r);
            int c_sum = cs_sum(nums,l,mid,r);
            return max({l_sum,r_sum,c_sum});
        }

        return nums[r];
        
    }
    int maxSubArray(vector<int>& nums) {
        int l = 0;
        int  r = nums.size() - 1;
        return max_cal(nums,l,r);
    }
};