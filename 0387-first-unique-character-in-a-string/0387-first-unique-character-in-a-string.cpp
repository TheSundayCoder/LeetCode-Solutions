class Solution {
public:
    int firstUniqChar(string s) {
        int a[26]={0};
        for(int i = 0 ; i < s.length();i++){
            a[s.at(i)-'a']++;
        }
      for(int i = 0 ; i < s.length();i++){
        if(a[s.at(i)-'a']==1){
            return i;
        }
      }
        return -1;
    }
};