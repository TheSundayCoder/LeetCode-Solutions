class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lon = 1;int max = 0;
        if(nums.size()==0){return 0;}
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i++){
                if(nums[i]+1 == nums[i+1]){
                        lon++;
                }
                else if(nums[i]==nums[i+1]){continue;}
                else{
                    if(max <=lon){
                        max = lon;
                        
                    }
                    lon = 1;
                        continue;
                }
                
        }
        if(lon > max){max = lon;}
        return max;
    }
};
