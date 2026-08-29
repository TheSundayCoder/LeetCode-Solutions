class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rev = 0,sum = 0,k=n;
        while(k!=0){
            int r =  k%10;
            rev = rev*10+r;
            k = k/10;
        }
        if(rev>n){
            for(int i = n ; i <= rev ; i++){
                int count = 0;
                for(int j = 1 ; j <=i ; j++){
                    if(i%j ==0){
                        count++;
                    }
                   
                }
                 if(count==2){
                          sum += i;
                    }
            }
        
        }
        else if(n>=rev){
            for(int i = rev ; i <= n ;i++){
                int count = 0;
                for(int j=1 ; j <=i ; j++){
                    if(i%j==0){
                        count++;
                    }
                }
                if(count==2){
                    sum+= i;
                }
            }
        }
        return sum;
    }
};