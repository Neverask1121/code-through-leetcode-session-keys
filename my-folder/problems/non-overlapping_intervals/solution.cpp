class Solution {
private:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int answer = 1;
        sort(intervals.begin(), intervals.end(), cmp);
        int prev = intervals[0][1];
        for(int i = 1 ; i < intervals.size() ; i++){
            if(prev <= intervals[i][0]){
                answer++;
                prev = intervals[i][1];
            }
        }
        return intervals.size() - answer;
    }
};