class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {int min = INT_MAX;
        for(int i = 0 ; i  < nums.size() ; i++){
            int sum = nums[i];
            int count = 1;
             if(count>=l &&count<=r &&sum>0){
                        if(min>sum){
                            min = sum;
                        }}
           
                for(int j = i+1 ; j<nums.size() ; j++){
                    sum += nums[j];
                    count++;
                    if(count>=l &&count<=r &&sum>0){
                        if(min>sum){
                            min = sum;
                        }
                            
                }
            }
        }
        if(min==INT_MAX){return -1;}
        return min;
    }
};