class Solution {
public:
    double angleClock(int hour, int minutes) {
        // take 0 from the 12
        // then do is iterate for every degree of 6 degrees
        // or we can do is 3 degrees for 12 iteratives
        // angle of hour from the 0th degree
        hour = hour % 12;  // ADD THIS LINE
        double hour_degrees = hour*30 + 0.5*minutes;
        double minute_degrees = minutes*6; 
        
        double angle = abs(hour_degrees - minute_degrees);
        return min(angle, 360.0 - angle);  // REPLACE last 4 lines with this
    }
};