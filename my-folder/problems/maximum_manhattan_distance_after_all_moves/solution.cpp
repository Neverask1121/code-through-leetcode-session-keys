class Solution {
public:
    int maxDistance(string moves) {
        int x = 0, y = 0;
        for(int i = 0 ; i < moves.length() ; i++){
            if(moves[i] == 'L'){
                x -= 1;
            }
            else if(moves[i] == 'R'){
                x += 1;
            }
            else if(moves[i] == 'U'){
                y += 1;
            }
            else if(moves[i] == 'D'){
                y -= 1;
            }
        }
        for (int i = 0 ; i < moves.length() ; i++){

            if(moves[i] == '_'){
                if(x < 0){
                    x -= 1;
                }
                else{
                    x += 1;
                }
            }
        }
        return abs(x)+abs(y);
    }
};