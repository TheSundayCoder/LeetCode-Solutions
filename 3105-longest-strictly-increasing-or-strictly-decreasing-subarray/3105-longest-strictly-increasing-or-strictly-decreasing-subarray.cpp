class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max = 1;
        for(int i = 0 ; i  < nums.size()-1 ; i++){
            int count = 1;
            for(int j = i+1 ; j < nums.size() ; j++)
                {if(nums[j]>nums[i]){
                    i++;
                    count++;
                }
                else{
                    break;
                }}
        
        if(count>max){
            max = count;
        }
        
        }
          for(int i = 0 ; i  < nums.size()-1 ; i++){
            int count = 1;
            for(int j = i+1 ; j < nums.size() ; j++)
               { if(nums[j]<nums[i]){
                i++;
                    count++;
                }
                else{
                    break;
                }}
        
        if(count>max){
            max = count;
        }
        
        }
        return max;
    }
};