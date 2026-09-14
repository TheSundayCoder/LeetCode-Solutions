class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN,k=0;
        for(int i = 0 ; i < nums.size();i++){
            if(max<nums[i]){
                max = nums[i];
                k=i;
            }
        }
      sort(nums.begin(),nums.end());
      if(nums[nums.size()-1] == nums[nums.size()-2]){
        return -1;}
        if(nums[nums.size()-1]>=2*nums[nums.size()-2]){
            return k;
        }
      
      return -1;
    }
};