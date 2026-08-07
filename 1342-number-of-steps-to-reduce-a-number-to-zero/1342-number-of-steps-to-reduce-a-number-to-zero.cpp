class Solution {
public:
    int numberOfSteps(int num) {int p = 0 ;
          for(int i = 0;  3<4 ; i ++){
            if(num == 0)
            {
               return p;
            }     
            if(num%2==0){
                num = num/2;
                p++;
            }
            else{
                num = num-1;
                p++;
            }
                 }
    }
};