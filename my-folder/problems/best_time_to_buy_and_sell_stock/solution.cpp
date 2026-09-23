class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int> temp = prices;
        // vector<int>temp2 = prices;
        // sort(temp.begin(), temp.end(), greater<int>());
        // for(int i = 0 ; i < prices.size() ; i++){
        //     if(prices[i] != temp[i]){
        //         sort(temp2.begin()+(i+1), temp2.end());
        //         return temp2[prices.size()-1] - prices[i];
        //     }
        // }
        // return 0;
        int count1 = 0, count2 = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            count1 = max(0, count1 += prices[i]-prices[i-1]);
            count2 = max(count1, count2);
        }
        return count2;
    }
};