class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> v(n);
        for(int i = 0 ; i < n ;i++){
            if(nums1[i]%2==1){
                v[i]=nums1[i];
            }
            else{
                for(int j = 0 ; j < n ; j++){
                    if(j==i){
                        continue;
                    }
                    if((nums1[i]-nums1[j])%2==1){
                        v[i] = nums1[i]-nums1[j];
                    }
                      else{
                v[i] = nums1[i];
            }
                }
            }
          
        }
        return true;
    }
};