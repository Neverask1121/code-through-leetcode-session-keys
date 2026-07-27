class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int m = piles[n - 1];

        int low = 1, high = m;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long count = 0;
            for (int j = 0; j < n; j++) {
                count += (piles[j] + mid - 1) / mid;
            }

            if (count <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};