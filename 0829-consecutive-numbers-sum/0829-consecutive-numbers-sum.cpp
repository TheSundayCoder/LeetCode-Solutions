class Solution {
public:
    int consecutiveNumbersSum(int n) {
         int count =0 ;
    for(int i = 1 ; i*i<=2*n ; i++){
        if(2*n%i==0){
            long double c = (double(2)*n)/i;
            c +=1-i;
            c /=2;
            long long z = c;
            if(z==c &&z>0){
                count++;
            }
           if(i!= 2*n/i){ int x = 2*n/i;
             long double y = (double(2)*n)/x;
            y +=1-x;
            y /=2;
            long long p = y;
            if(p==y &&p>0){
                count++;
            }}
        }
    }
    return count;
    }
};