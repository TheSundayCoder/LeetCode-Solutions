class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> a(arr.size(), -1);
        for(int i = 0 ; i < arr.size() ; i++){
            int max = -1;
             for(int j = i+1 ; j < arr.size() ; j++){
                 if(max<arr[j]){
                    max = arr[j];
                 }
             }
             a[i]=  max;
        }
        return a;
        
            }
};