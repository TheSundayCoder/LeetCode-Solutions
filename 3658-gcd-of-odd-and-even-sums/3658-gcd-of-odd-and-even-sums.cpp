class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so = n*(n+1),max =0 ;
        int se = n*n;
        max = gcd(so,se);
        return max;
    }
};