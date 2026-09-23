class Solution {
public:
    int findLucky(vector<int>& arr) {
        int a[500]={0};
        for(int i = 0 ; i < arr.size() ; i++){
            a[arr[i]-1]++;
        }
        sort(arr.begin(),arr.end());
       for(int i = arr.size()-1 ; i >= 0 ; i--){
        if(arr[i]==a[arr[i]-1]){
            return arr[i];
        }
       }
        return -1;
    }
};