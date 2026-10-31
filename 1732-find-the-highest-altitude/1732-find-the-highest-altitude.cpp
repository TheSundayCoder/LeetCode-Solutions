class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int a = 0;
        for(int i = 0 ; i < gain.size() ; i++){
            a += gain[i];
            if(max < a){max = a;}
        }
        return max;
    }
};