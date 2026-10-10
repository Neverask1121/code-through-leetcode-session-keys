class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        double ans = 1.0;
        double xx = x;
        if(nn<0) nn = -1.0 * nn;
        while(nn){
            if(nn%2){
                nn = nn - 1;
                ans = ans * xx;
            }
            else{
                nn = nn / 2.0;
                xx = xx * xx;
            }
        }
        if(n<0) ans = 1.0 / ans;
        return ans; 
    }
};