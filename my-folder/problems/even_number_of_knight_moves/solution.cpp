class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        // vector<int> answer;
        // for(int i = 0 ; i < 2 ; i++){
        //     answer[i] = abs(start[i] - target[i]);
        // }
        // bool nigga = true;
        // for(int i = 0 ; i < 2 ; i++){
        //     if(answer[i] % 2 != 0 ){
        //         bool nigga = false;
        //     }
        // }
        bool nigga = false;
        if((start[0] + start[1]) % 2 == (target[0]+target[1]) % 2){
            nigga = true;
        }
        return nigga;
    }
};