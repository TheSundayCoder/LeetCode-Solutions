class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[26]={0};
        a[t.at(t.length()-1)-'a']++;
        for(int i = 0 ; i < s.length() ; i++){
            a[s.at(i)-'a']--;
            a[t.at(i)-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(a[i]>0){
                char c = i+'a';
                return c;
            }
        }
        return 'a';
    }
};