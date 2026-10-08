class Solution {
public:
    string removeOuterParentheses(string s) {
        int c = 0;
        string t="";
        if(s.length()==1 || s.length()==2){
            return t;
        }
        for(int i = 0 ; i < s.length();  i++){
            if(s.at(i)=='('){int a = 0;
                for(int j = i+1 ; j<s.length();j++){
                            if(s.at(j)==')'&&a==0){
                                i=j;
                                break;
                            }
                            if(s.at(j)=='('){a++;}
                            else{a--;}
                            t += s.at(j);
                }
            }
        }
        return t;
    }
};