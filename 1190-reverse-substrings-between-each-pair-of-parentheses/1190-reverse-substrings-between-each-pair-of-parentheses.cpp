class Solution {
public:
    string reverseParentheses(string s) {
        int count =0;
        for(int i = 0 ; i  < s.length() ; i++){
            if(s.at(i)=='('){count++;}
                    }
                    
        if(count==0){return s;}
        int count1=0;
        
        string y = s;
        while(count1<count){
            int x= 0 , l = 0; string a ="";
            for(int i = 0 ; i < y.length()  ; i++){
                    if(y.at(i)=='('){
                        x=i;
                    }
                    if(y.at(i)==')'){
                        l=i;
                        break;
                    }     
            }int k = 1;
            for(int i = 0 ; i < y.length()  ; i++){
                if(i==x || i==l){
                    continue;
                }
                if(i >x && i < l){
                    a +=  y.at(l-k);
                    k++;
                }
                else{
                    a += y.at(i);
                }
            }
            y = a;
            count1++;
        }
        return y;
    }
};