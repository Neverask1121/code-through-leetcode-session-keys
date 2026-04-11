class Solution {
public:
    int minOperations(vector<int>& nums) {
    auto qerlanovid = nums;
    int count = 0;
    for(int i = 0; i < (int)nums.size(); i++){
        if(i % 2 == 0){
            if(!isPrime(nums[i])){
                count += nearestprime(nums[i]) - nums[i];
            }
        } else {
            if(isPrime(nums[i])){          // ✅ only fix if it IS prime
                count += nearestNonPrime(nums[i]) - nums[i];
            }
        }
    }
    return count;
}
private:
    int nearestNonPrime(int n){
    while(isPrime(n)) n++;   // skip primes
    return n;
}
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i = 5; i*i <= n; i += 6)
            if(n%i==0 || n%(i+2)==0) return false;
        return true;
    }
    bool iscomposite(int n){
        return (n > 1 && !isPrime(n));
    }
    int nearestprime(int n){
        if(n < 2) n = 2;
        while(!isPrime(n)) n++;
        return n;
    }
    int nearestcomposite(int n){
        if(n <= 1) n = 4;
        while(!iscomposite(n)) n++;
        return n;
    }
};