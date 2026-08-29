class Solution {
public:
    int lengthOfLastWord(string s) {
       int index = s.length()-1;
       string n = "";
       for(int i = s.length()-1; true; i--){
        if(s.at(i )==' '){
            index--;
        }
        else{
            break;
        }}
        for(int i = 0; i <= index ; i++){
            if(s.at(i) != ' '){
                n += s.at(i);
            }
            else{
                n="";
            }
        }
       
       return n.length();
    }

};