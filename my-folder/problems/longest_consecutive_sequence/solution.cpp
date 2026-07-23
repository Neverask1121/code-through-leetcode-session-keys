class Solution {
public:
    int longestConsecutive(vector<int>& vec) {
        sort( vec.begin(), vec.end() );
        vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
        int n = vec.size();
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        int count = 0;
        int nigga = INT_MIN;
        for(int i = 0 ; i < n-1 ; i++){
            if(vec[i]+1 == vec[i+1]){
                count++;
            }
            else{
                count=0;
            }
            nigga = max(nigga, count);
        }
        return nigga+1;
    }
};