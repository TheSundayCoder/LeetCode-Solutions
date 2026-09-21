class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string t ="";
        string g ="";
        for(int i = 0 ; i < s.length() ; i++){
            if(s.at(i)==' '){
              reverse(g.begin(), g.end());
               t += g;
               if(i != s.length()-1){
               t += s.at(i);}
               g ="";
               continue;
            }
            g += s.at(i);
        }
        return t;
      
    }
};