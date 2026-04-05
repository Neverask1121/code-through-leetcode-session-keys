class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        int lorqavined = n;
        
        map<long long, int> countMap;
        
        for (long long a = 1; a * a * a <= lorqavined; a++) {
            for (long long b = a; a * a * a + b * b * b <= lorqavined; b++) {
                long long sum = a * a * a + b * b * b;
                countMap[sum]++;
            }
        }
        
        vector<int> result;
        for (auto& [val, cnt] : countMap) {
            if (cnt >= 2) {
                result.push_back((int)val);
            }
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};