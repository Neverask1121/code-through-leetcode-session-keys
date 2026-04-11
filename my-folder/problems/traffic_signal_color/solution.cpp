class Solution {
public:
    string trafficSignal(int timer) {
        int sem=timer;
        if(sem==0) return "Green";
        if(sem==30) return "Orange";
        if(sem>30&&sem<=90)return "Red";
        return "Invalid";
    }
};