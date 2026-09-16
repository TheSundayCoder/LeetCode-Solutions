class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count = 0 ;
        if(timeSeries.size()==1){
            return duration;
        }
        for(int i = 0 ; i < timeSeries.size()-1;i++){
            if(timeSeries[i+1]-timeSeries[i] >=duration){
                count += duration;
            }
            else{
                count += timeSeries[i+1]-timeSeries[i];
            }
        }
        return count+duration;
    }
};