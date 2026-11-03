class Solution {
public:
    int minMoves(vector<int>& nums) {
        int a = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            if(a<nums[i]){
                 a = nums[i];
        }
        }int c = 0;
         for(int i = 0 ; i < nums.size() ; i++){
             c += a-nums[i];
        }
       return c;

    }
};