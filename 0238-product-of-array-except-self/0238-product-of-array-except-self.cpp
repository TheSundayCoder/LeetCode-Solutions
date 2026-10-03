class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a(nums.size());int product = 1;int k=0; int freq = 0;int pos=1;
        for(int i = 0 ; i < nums.size() ; i++){
            a[i]=0;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            product *= nums[i];
            if(nums[i]==0){
                freq++;
            }
            else{
                pos *= nums[i];
            }
        }
        if (freq >1){
            return a;
        }
        if(freq ==0){
            for(int i = 0 ; i < nums.size() ; i++){
            a[k] = product/nums[i];
            k++;
            }
        }
        else{
            for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] !=0){
                a[k]=0;
                k++;
            }
            else{
                a[k]=pos;
                k++;
            }
        }
        } 
    return a;
    }
};