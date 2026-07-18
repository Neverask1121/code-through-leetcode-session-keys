class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if (n == 1) return s;                 // no steps
        
        long long N = n - 1;                  // number of steps
        long long maxOdd = (N % 2 == 1) ? N : N - 1;   // largest odd ≤ N
        
        // value after maxOdd steps: s + (maxOdd/2)*m - (maxOdd/2)*1 + m? actually derive:
        // For odd i: value = s + (i*(m-1) + m + 1) / 2
        long long answer = s + (maxOdd * (m - 1) + m + 1) / 2;
        return answer;
    }
};