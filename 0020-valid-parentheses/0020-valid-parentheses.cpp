class Solution {
public:
    bool isValid(string s) {
      for(int i = 0 ; i < s.length() ; i++){
        int a = 0 , b = 0 , c= 0 ,z=0;
        if(s.at(i)=='('||s.at(i)=='{'||s.at(i)=='['){
            
            if( i==s.length()-1){return false;}
            for(int j = i+1 ; j <s.length() ; j++){
                if(s.at(i)=='('&&s.at(j)==')'&&(a == 0 &&b == 0 && c==0)){z=5;break;}
            
           
                if(s.at(i)=='['&&s.at(j)==']'&&(a == 0 &&b == 0 && c==0)){z=5;break;}
            
                if(s.at(i)=='{'&&s.at(j)=='}'&&(a == 0 &&b == 0 && c==0)){z=5;break;}
           
                if(s.at(j)=='('){
                    a++;
                }
                 if(s.at(j)==')'){
                    a--;
                }
                if(s.at(j)=='{'){
                    b++;
                }
                if(s.at(j)=='}'){
                    b--;
                }
                if(s.at(j)=='['){
                    c++;
                }
                if(s.at(j)==']'){
                    c--;
                }
           
            }
        }
        else{ if(i==0){return false;}
            for(int j = i -1; j >=0 ; j--){
                if(s.at(i)==')'&&s.at(j)=='('&&(a == 0 &&b == 0 && c==0)){z=5;break;}
            
           
                if(s.at(i)==']'&&s.at(j)=='['&&(a == 0 &&b == 0 && c==0)){z=5;break;}
            
                if(s.at(i)=='}'&&s.at(j)=='{'&&(a == 0 &&b == 0 && c==0)){z=5;break;}
           
                if(s.at(j)=='('){
                    a++;
                }
                 if(s.at(j)==')'){
                    a--;
                }
                if(s.at(j)=='{'){
                    b++;
                }
                if(s.at(j)=='}'){
                    b--;
                }
                if(s.at(j)=='['){
                    c++;
                }
                if(s.at(j)==']'){
                    c--;
                }
            }
        }
        if(z !=5){
            return false;
        }
      }
      return true;
    }
};
