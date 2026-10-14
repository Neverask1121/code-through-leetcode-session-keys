class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string str = "";
        int ans = 0;
        for(int i = 0 ; i < num ; i++){
            ans+=9;
        }
        if(sum > ans){
            return str;
        }
        for(int i = 0 ; i < num ; i++){
            if(sum > 9){
                str.push_back('9');
                sum -= 9;
            }
            else if(sum > 0 && sum <= 9){
                str.push_back('0' + sum);
                sum -= sum;
            }
            else{
                str.push_back('0');
            }
        }
        return str;
    }
};