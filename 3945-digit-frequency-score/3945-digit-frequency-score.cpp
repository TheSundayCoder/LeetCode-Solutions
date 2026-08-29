class Solution {
public:
    int digitFrequencyScore(int n) {
        int a[10]={0},sum=0;
        while(n>0){
            int r= n%10;
            n = n/10;
            a[r-0]++;
        }
        for(int i = 0; i <=9 ; i++){
            sum += i*a[i];
        }
        return sum;
    }
};