class Solution {
public:
    bool detectCapitalUse(string word) {
        int count =0;
        for(int i = 0 ; i < word.length() ; i++){
            if(word.at(i) <= 90 &&word.at(i) >=65 ){
                count++;
            }

        }
        if(count==word.length()||count ==0){
            return true;
        }
        else if(count != 1){
            return false;
        }
        else{
            if(word.at(0)>=65 &&word.at(0) <=90){
                return true;
            }
        }
        return false;
    }
};