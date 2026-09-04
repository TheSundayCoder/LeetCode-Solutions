class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
   
            for(int i = 0 ; i < nums.size() ; i++){
                    int max = INT_MIN ,  min = INT_MAX; 
                    for(int j = 0 ; j <=i ; j++){
                        if(max < nums[j]){
                            max = nums[j];
                        }
                    }
                    for(int k = i ;  k < nums.size() ; k++){
                        if(min > nums[k]){
                            min = nums[k];
                        }
                    }
                    if((max-min)<=k){
                        return i;
                    }
              
            }
            return -1;
    }
};