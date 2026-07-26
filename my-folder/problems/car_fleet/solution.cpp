class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        for (int i = 0; i < n; ++i) {
            cars.emplace_back(position[i], speed[i]);
        }
        // Sort by position descending (closest to target first)
        sort(cars.begin(), cars.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        int fleets = 0;
        double maxTime = -1.0;   // time of the fleet ahead

        for (const auto& [pos, spd] : cars) {
            double time = (double)(target - pos) / spd;
            // If this car takes longer than the fastest car ahead,
            // it cannot catch up -> it starts a new fleet.
            if (time > maxTime + 1e-9) {  // use epsilon to avoid floating errors
                ++fleets;
                maxTime = time;
            }
        }
        return fleets;
    }
};