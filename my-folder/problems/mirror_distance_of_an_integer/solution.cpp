class Solution {
private:
    int reverse(int n){
        int reverse=0;
        while(n!=0){
            reverse = n%10+reverse*10; 
            n/=10;
        }
        return reverse;
    }
public:
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};