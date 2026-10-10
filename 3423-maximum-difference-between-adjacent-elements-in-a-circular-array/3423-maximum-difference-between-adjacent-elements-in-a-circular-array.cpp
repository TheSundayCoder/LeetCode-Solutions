class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max = abs(nums[nums.size()-1]-nums[0]);
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(max < abs(nums[i]-nums[i+1]) ){
                max =  abs(nums[i]-nums[i+1]);
            }
        }
        return max;
    }
};