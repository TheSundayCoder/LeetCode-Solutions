class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int a[26];
        int count  = 0;
        for(int i = 0; i < s.length() ;i++){
           a[s[i] - 'a']++;
           a[t[i]  - 'a']--;
        }
        for(int count : a){
            if(count != 0){
                return false;
            }
        }
        return true;
    }
};