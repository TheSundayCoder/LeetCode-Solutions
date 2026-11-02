class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a = false;
        for(int i = 0 ; i < nums.size()-1 ; i++ ){
            if(nums[i]>nums[i+1]){
                a = true;break;
            }
        }
        if(a){
             for(int i = 0 ; i < nums.size()-1 ; i++ ){
            if(nums[i]>=nums[i+1]){
               continue;
            }
            else{
                return false;
            }
        }
        }
        else{
            for(int i = 0 ; i < nums.size()-1 ; i++){
                if(nums[i]<=nums[i+1]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
       return true;
    }
};