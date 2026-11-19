class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int> c(score.size());  vector<string> ans;
       c = score;
       sort(c.begin() , c.end());
       for(int i = 0 ; i < score.size() ; i++){
        int count = 0;
        for(int j = score.size()-1 ; j >=0; j--){
            if(c[j]!= score[i]){
                count++;continue;
            }
            break;
        }
        string y ="";
        switch (count) {
            case 0:  y = "Gold Medal";
            break;
            case 1:  y = "Silver Medal";break;
            case 2: y ="Bronze Medal";break;
                 
        }
        if(y==""){ans.push_back(to_string(count+1));continue;}
        ans.push_back(y);
       } 
       return ans;
    }
};