class Solution {
public:
    bool judgeCircle(string moves) {
        int sum1 = 0, sum2 = 0;
        int n = moves.size();
        for(int i = 0 ; i < n ; i++){
            if(moves[i] == 'U') sum1++;
            else if(moves[i] == 'D') sum1--;
            else if(moves[i] == 'L') sum2--;
            else if(moves[i] == 'R') sum2++;
        }
        if(sum1 == 0 && sum2 == 0) return true;
        return false;
    }
};