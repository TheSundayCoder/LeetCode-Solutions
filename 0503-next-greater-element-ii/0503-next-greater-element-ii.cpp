class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> a(nums.size(),-1);int z = 0;
        if(nums.size()==1){return a;}
        for(int i = 0 ; i < nums.size() ; i++){
            int k = 0;
            for(int j = i+1 ; j < nums.size() ; j++ ){
                 if(nums[i]<nums[j]){
                    a[z]=nums[j];
                    z++; 
                    k=10;
                    break;}
            }
            if(k==0){
                for(int u = 0 ; u <i ; u++){
                    if(nums[i]<nums[u]){
                    a[z]=nums[u];
                    z++; 
                    k=10;
                    break;}
                }
            }
            if(k==0){z++;}
        }
        return a;
    }
};