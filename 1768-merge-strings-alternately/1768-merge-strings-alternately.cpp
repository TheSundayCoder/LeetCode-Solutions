class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n;
        if(word1.length() < word2.length()){
            n = word1.length();
        }
        else{
            n = word2.length();
        }
        string s="";
        for(int i = 0; i<n;i++){
            s+=word1.at(i);
            s+=word2.at(i);
        }
        if(word1.length()>word2.length())
      {  for(int i = n ; i < word1.length() ;i++){
        s+=word1.at(i);
      }}
      else{
        for(int i = n ; i < word2.length() ;i++){
        s+=word2.at(i);
      }
      }
      return s;
    }
};