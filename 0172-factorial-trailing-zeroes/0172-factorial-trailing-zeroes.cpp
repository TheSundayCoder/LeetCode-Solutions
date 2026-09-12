class Solution {
public:
    int trailingZeroes(int n) {
        long long two = 0 , five =0;
        for(int i = 2 ; i <=n ; i++){
            int j = i;
            while(true){
               
                if(j%2==0){
                    two++;
                    j = j/2;
                }
                else if(j%5==0){
                    five++;
                    j = j/5;
                }
                else{
                    break;
                }
            }
        }
        if(two>five){
            return five;
        }
        else{
            return two;
        }
        return 0;
    }
};