class Solution {
public:
    int countRotations(string s, int k) {
        int count = 0 ; 
        int i = 0;
        while(i<s.length()){
            int score=0;
        string h = s.substr(i)+s.substr(0,i);
            for(int j = 0 ; j < h.length()-1;j++){
                if(h.at(j)==h.at(j+1)){
                    score++;
                }
            }
            if(score==k){
                count++;
            }
            i++;
        }
        return count;
    
    }
};