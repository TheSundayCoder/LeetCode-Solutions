class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
     int mino=INT_MAX , mine=INT_MAX ,count = 0, min=INT_MAX ;
     for(int i = 0 ; i  < nums1.size() ; i++){
         if(nums1[i]%2==1){
            if(mino>nums1[i]){
                mino = nums1[i];
            }
         }
         else{count++;
            if(mine<nums1[i]){
                mine = nums1[i];
                
            }
         }
         if(nums1[i]<min){
            min = nums1[i];
         }
     }
     if(count==nums1.size()){
        return true;
     }
     if(mino == min){
        return true;
     }
      return false;
    }
};