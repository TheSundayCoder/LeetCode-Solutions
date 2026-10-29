class Solution {
public:
    bool checkOnesSegment(string s) {
        // if(s.length()==1&&s.at(0)=='1'){return true;}
        bool a= true;
        for(int i = 0 ; i < s.length()-1 ; i++){
            if(s.at(i)=='0' &&s.at(i+1)=='1'){
                a = false;
            }
        }
        if(a){
            return true;
        }
        return false;
    }
};