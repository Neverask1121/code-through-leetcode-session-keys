class Solution {
public:
    bool checkDivisibility(int n) {
        int product = 1;
        int sum = 0;
        int temp = n;
        while(n > 0){
            int m = n % 10;
            product *= m;
            sum += m;
            n /= 10;
        }
        if((temp % (sum + product)) == 0){
            return true;
        }
        return false;
    }
};