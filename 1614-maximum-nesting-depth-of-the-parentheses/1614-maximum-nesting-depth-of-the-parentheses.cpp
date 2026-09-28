class Solution {
public:
    int maxDepth(string s) {int max = 0;
        for(int i = 0 ; i< s.length() ; i++){
            
                int a = 0;
                for(int j = 0 ; j < i ; j++){
                        if(s.at(j)=='('){
                            a++;
                        }
                        else if(s.at(j)==')'){
                            a--;
                        }
                }
                if(max <a){
                    max = a;
                }
            }
        
        return max;
    }
};