class Solution {
public:
    bool isSameAfterReversals(int num) {
        int t = num;
        int rev = 0;
        while(t>0){
            int r = t%10;
            t/=10;
            rev = rev*10+r;
        }
        while(rev>0){
            int r = rev%10;
            t = t*10+r;
            rev /=10;
        }
        if(t==num){
            return true;
        }
        return false;
    }
};