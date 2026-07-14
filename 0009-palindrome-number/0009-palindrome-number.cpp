class Solution {
public:
    bool isPalindrome(int x) {
        string a = to_string( x);
        string b = "";
        for(int i = a.length()-1; i >=0 ; i--){
            b = b+a.at(i);
        }
        if(a == b){
            return true;
        }
      
            return false;
        
    }
};