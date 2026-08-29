class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int a[101]={0},sum =0;
        for(int i = 0 ; i < nums.size();i++){
           a[nums[i]-0]++;
        }
       for(int i = 0 ; i<=100 ;i++){
         if(a[i]%k==0){
            sum +=i*a[i];
         }
       }
       return sum;
    }
};