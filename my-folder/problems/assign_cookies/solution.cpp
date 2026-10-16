class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0;
        int j = 0;
        int n = g.size();
        int m = s.size();
        vector<int>temp1 = g;
        vector<int>temp2 = s;
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        while(i < n && j < m){
            if(temp1[i]<=temp2[j]){
                i++;
            }
            j++;
        }
        return i;
    }
};