class Solution {
public:
    int maxProduct(int n) {
        vector<int>sort_nigga;
        int count = 0;
        while(n > 0){
            sort_nigga.push_back(n % 10);
            n /= 10;
            count++;
        }
        if(count == 1){
            return -1;
        }
        sort(sort_nigga.begin(), sort_nigga.end());
        return sort_nigga[count-1]*sort_nigga[count-2];
    }
};