class Solution {
public:
    bool halvesAreAlike(string s) {
        int v1 = 0 , v2 = 0;
        for(int i = 0 ; i <s.length()/2 ; i++){
            if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U'){
                v1++;
            }
        }
        for(int i =s.length()/2 ; i < s.length() ; i++ ){
            if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U'){
                v2++;
            }
        }
        if(v1==v2){
            return true;
        }
        return false;
    }
};