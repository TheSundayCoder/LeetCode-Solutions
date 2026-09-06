class Solution {
public:
    bool isPerfectSquare(int num) {
      
        
         for(long long i = 0 ; i <= num ; i++){
            if(i*i<num){
                continue;
            }
           else if(i*i==num)
              {
                return true;
              }
              else{
                return false;
              }
         }
         return true;
    }
};