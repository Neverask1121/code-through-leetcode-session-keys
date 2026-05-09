class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score =0, counter= 0;
        for(int i = 0 ; i < events.size() ; i++){
            if(events[i] == "W"){
                counter++;
                if(counter == 10){
                    break;
                }
            }
            if(events[i]=="0"){
                score+=0;
            }
                if(events[i]=="1"){
                score+=1;
            }
                    if(events[i]=="2"){
                score+=2;
            }
                        if(events[i]=="3"){
                score+=3;
            }
                            if(events[i]=="4"){
                score+=4;
            }
                                if(events[i]=="5"){
                score+=5;
            }
                                    if(events[i]=="6"){
                score+=6;
            }
            else if(events[i] == "WD" || events[i] == "NB"){
                score+=1;
            }
        }
        if(counter>=10){
            counter = 10;
        }
        return {score, counter};
    }
};