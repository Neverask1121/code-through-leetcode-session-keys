class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int diff = abs(n-k);
        int sum = n+k;
        int sum2= 0;
        for(int i = max(0, n-k) ; i <= sum ; i++){
            if(abs(n-i) <= k && (n&i) == 0){
                sum2+=i;
            }
        }
        return sum2;
    }
};