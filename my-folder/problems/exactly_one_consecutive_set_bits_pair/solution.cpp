class Solution {
public:
    bool consecutiveSetBits(int n) {
        string bitse= bitset<32>(n).to_string();
        int co = 0;
        for(int i = 0;i < bitse.length();i++){
            if(bitse[i] == '1' && bitse[i+1]== '1') co++;
        }
        if(co > 1|| co== 0){
            return false;
        }
        else{
            return true;
        }
    }
};