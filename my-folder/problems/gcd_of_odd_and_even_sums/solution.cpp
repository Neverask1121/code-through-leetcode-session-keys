class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1=0, sum2=0;
        for(int i = 1 ; i <= n*2 ; i++){
            if(i%2==0){
                sum2+=i;
            }
            else if(i%2!=0){
                sum1+=i;
            }            
        }
        int result = gcd(sum1, sum2);
        return result;
    }
};