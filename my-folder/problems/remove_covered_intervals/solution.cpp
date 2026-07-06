class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });

        int count = intervals.size();

        for(int i = 0; i < intervals.size() - 1; i++){
            if(intervals[i][0] <= intervals[i+1][0] &&
               intervals[i+1][1] <= intervals[i][1]){
                count--;
                intervals[i+1] = intervals[i];   // keep the covering interval
            }
        }

        return count;
    }
};