class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
                 int sum = 0;
                 for(int j = 0 ; j < i ; j++ ){
                    sum += nums[j];
                 }
                 for(int k = i+1; k < nums.size() ; k++){
                    sum -= nums[k];
                 }
                 if(sum==0){
                    return i;
                 }

        }
        return -1;
    }
};