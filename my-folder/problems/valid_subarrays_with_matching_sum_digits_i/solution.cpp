class Solution {
public:
    using ll = long long;
    bool check(ll n, ll x){
        n = abs(n);
        ll last = n % 10;
        while(n >= 10){
            n /= 10;
        }
        ll first = n;
        return first == x && last == x;
    }
    
    int countValidSubarrays(vector<int>& nums, int x) {
        ll nigg = 0;
        ll n = nums.size();
        for(ll i = 0 ; i < n ; i++){
            ll sum = 0;
            for(ll j = i ; j < n ; j++){
                sum += nums[j];
                if(check(sum, x)){
                    nigg += 1;
                }
            }
        }
        return nigg;
    }
};