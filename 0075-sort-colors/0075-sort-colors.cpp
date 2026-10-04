class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1){
                b++;
            }
            else{c++;}
        }
      int k = 0;
        for(int i = 1 ; i <= a ; i++){
                nums[k]=0;
                k++;
        }
          for(int i = 1 ; i <= b ; i++){
                nums[k]=1;
                k++;
        }
          for(int i = 1 ; i <= c ; i++){
                nums[k]=2;
                k++;
        }
      return nums;
    }
};