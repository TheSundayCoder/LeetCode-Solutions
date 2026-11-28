class Solution {
public:
     vector<int> majorityElement(vector<int>& nums) {
    //vector<int> ans;
    //     sort(nums.begin(),nums.end());int count = 1;
    //     for(int i = 0 ; i  < nums.size()-1 ; i++ ){
    //         if(nums[i+1]==nums[i]){count++;continue;}
    //         else{
    //             if(count>nums.size()/3){
    //                 ans.push_back( nums[i]);
    //             }
    //             count = 1;
    //         }
    //     }
    //     if(count>nums.size()/3){
    //                 ans.push_back (nums[nums.size()-1]);
    //             }
    //             return ans;


 unordered_map<int,int> c;vector<int> ans;int n = nums.size();
 for(int i = 0 ; i < n ; i++){
    c[nums[i]]++;
 }
 for(auto it: c){
    if(it.second>n/3){
      ans.push_back(it.first);
    }
 }
 return ans;
    }
};