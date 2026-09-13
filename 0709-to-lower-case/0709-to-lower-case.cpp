class Solution {
public:
    string toLowerCase(string s) {string d ="";
        for(int i = 0 ; i < s.length() ; i++){
      if(s.at(i)>=65 &&s.at(i)<=90){
        s.at(i) = s.at(i)+32;
      }
     
        }
        return s;
    }
};