class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a(nums1.size());int k=0;
        for(int i = 0 ;i < a.size();i++){
            a[i]=-1;
        }
        for(int i = 0 ; i < nums1.size();i++){
            for(int j = 0 ; j < nums2.size();j++){
                if(nums1[i]==nums2[j]){
                      for(int l = j+1; l < nums2.size();l++){
                        if(nums2[l]>nums2[j]){
                            a[k]=nums2[l];
                            break;
                        }
                      }
                      break;
                }
                
            }
            k++;
        }
        return a;
    }
};