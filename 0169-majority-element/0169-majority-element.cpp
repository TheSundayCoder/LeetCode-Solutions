class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());int count = 1;
        for(int i = 0 ; i < nums.size()-1 ; i++){

            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                if(count>nums.size()/2){
                    return nums[i];
                }
                count = 1;
            }
        }
        return nums[nums.size()-1];
        
    }
};