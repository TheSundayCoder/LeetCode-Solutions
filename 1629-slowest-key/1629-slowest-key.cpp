class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        for(int i = releaseTimes.size()-1;i>0 ; i--){
            releaseTimes[i] -= releaseTimes[i-1];
        }
        int max = INT_MIN,ind=-1;
        for(int i = 0 ; i < releaseTimes.size();i++){
            if(max < releaseTimes[i]){
                max = releaseTimes[i];
                ind = i;
            }
            if(max == releaseTimes[i]&&keysPressed[ind]<keysPressed[i]){
                ind  = i;
            }
        }
        return keysPressed[ind];
    }
};