class Solution {
public:
    int hammingWeight(int n) {
        int b = 0;
        while(n>0){
            int r = n%2;
            n = n/2;
            b = b+r;
        }
        return b;
    }
};