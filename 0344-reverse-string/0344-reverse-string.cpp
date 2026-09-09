class Solution {
public:
 void reverseString(vector<char>& s) {

            vector<char> t(s.size());
            for(int i = s.size()-1;i>=0;i--){
                t[s.size()-1-i] = s[i];
            }
        
        s = t;
     
    }
};