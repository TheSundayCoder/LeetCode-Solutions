class Solution {
public:
    bool canAliceWin(int n) {
    int k = 10;
    while(true){
        n -= k;
        if(n<0){
            return false;
        }
        if(n==0){return true;}
        k--;
        n -=k;
        if(n<0){
            return true;
        }
        k--;
    }
    return false;
    }
};