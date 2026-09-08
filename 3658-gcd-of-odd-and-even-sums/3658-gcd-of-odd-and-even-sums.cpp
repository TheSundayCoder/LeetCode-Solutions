class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so = n*(n+1),max =0 ;
        int se = n*n;
        for(int i = 1 ; i <= so ; i++){
            if(so%i == se%i){
                  max = i;
            }
        }
        return max;
    }
};