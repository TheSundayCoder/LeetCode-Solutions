class Solution {
public:
    bool isPalindrome(string s) {
     string a = "",b="";
    for(int i = 0 ; i  < s.length() ; i++){
        if(s.at(i)>=65&&s.at(i)<=90){
            tolower(s.at(i));
            a +=  tolower(s.at(i));
        }
        else if(s.at(i)>=97 &&s.at(i)<=122){   
            a+= tolower(s.at(i));
        }
        else if(s.at(i)>=48 &&s.at(i)<=57){   
            a+= s.at(i);
        }
    }
    for(int i = a.length()-1 ; i >=0 ; i--){
        b += a.at(i);
    }
    if(a==b){
        return true;
    }
    return false;
    }
};