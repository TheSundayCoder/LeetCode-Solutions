class Solution {
public:
    string reverseWords(string s) {
         s = " "+s;
         string k="";
         string g="";int x=0,l=0;
         for(int i = s.length()-1; i>=0;i--){
            if((s.at(i) >=65 &&s.at(i)<=90)||(s.at(i) >=97 &&s.at(i) <=122)||(s.at(i)<=57 &&s.at(i)>=48)){x = i;}             }

             for(int i = s.length()-1; i>=0;i--){
            if((s.at(i) >=65 &&s.at(i)<=90)||(s.at(i) >=97 &&s.at(i) <=122)||(s.at(i)<=57 &&s.at(i)>=48)){l = i;break;}}

         for(int i = s.length()-1 ; i >= 0 ; i--){
             if(s.at(i)==' '){
                reverse(k.begin() , k.end());
                g += k;
                k="";
                if(i >x && i <l &&s.at(i-1) !=' '){
                    g += " ";
                }
                continue;
             }
              k += s.at(i);
         }
         
         return g;
    }
};