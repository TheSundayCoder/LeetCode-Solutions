class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
    int a[1000] = {0};
    for(int i = 0 ;  i < nums.size() ; i++){
        a[nums[i]-1]++;
    }
    int max = INT_MIN;
    int ind = 0;
    for(int i = 0 ;  i < 1000; i++){
        if(a[i]>max){
            max = a[i];
           
        }
    }
  for(int i = 0 ;  i < 1000; i++){
        if(a[i]==max){
           ind+=a[i];
           
        }
    }
    return ind;


    }
};