
class Solution {
public:
    #define ll long long
    bool asteroidsDestroyed(ll mass, vector<int>& asteroids) {
        int n = asteroids.size(), sum =0;
        sort(asteroids.begin(), asteroids.end());
        for(ll i = 0 ; i < n ; i++){
            if(mass>=asteroids[i]){
                mass += asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};