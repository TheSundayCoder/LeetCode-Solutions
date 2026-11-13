class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long max = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            long long prod =nums[i];
            if(max<prod){max = prod;}
            for(int j = i+1 ; j < nums.size() ; j++){
                    prod *= nums[j];
                    if(max<prod){max = prod;}
            }
            if(max<prod){max = prod;}
        }
        return max;
    }
};