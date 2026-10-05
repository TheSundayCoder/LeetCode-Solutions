class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2){return nums;}
        sort(nums.begin(),nums.end());
        vector<int> s(2); int k= 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0){
                if(nums[i] != nums[i+1]){
                    s[k]=nums[i];
                    k++;
                }
            }
            else if(i==nums.size()-1){
                if(nums[i] != nums[i-1]){
                    s[k]=nums[i];
                    k++;
                }
            }
            else{
                if(nums[i] != nums[i-1] && nums[i] != nums[i+1] ){
                    s[k] = nums[i];
                    k++;
                }
            }
        }
        return s;
    }
};