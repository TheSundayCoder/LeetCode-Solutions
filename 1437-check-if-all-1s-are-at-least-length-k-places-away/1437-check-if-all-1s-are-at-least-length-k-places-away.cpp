class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int a[100000] = {0};
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(nums[i]==1){
                a[i]=1;
            }
        }  int k1 = k; 
        for(int i = 0 ; i < nums.size() ; i++){
          
            if(a[i]==0){k1++;}
            else{
                if(k1>=k){
                    k1 = 0;
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};