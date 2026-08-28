class Solution {
public:
    int addDigits(int num) {
      int sum = 0 ,sum1 = 0;
      while(num/10 >0){
     while(num >0){
        sum += num%10;
        num = num/10;
     }
     num = sum;
     sum = 0;
     sum1 = num;
      }
      if(num/10==0){
        sum1 = num;
      }
         return sum1;
    }
 
};