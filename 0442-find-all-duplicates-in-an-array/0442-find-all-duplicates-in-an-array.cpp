class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> a(0);
        if(nums.size()==1){return a;}
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i]==nums[i+1]){
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};