class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size();i++){
            int n = 0; int b = 0;
            for(int j = 0 ; j < nums.size() ; j++){
                if(i==j){continue;}
                if(nums[j]>nums[i]){n++;}
                if(nums[j]<nums[i]){b++;}
            }
            if(b>0&&n>0){
                count++;
            }
        }
     return count;
    }
};