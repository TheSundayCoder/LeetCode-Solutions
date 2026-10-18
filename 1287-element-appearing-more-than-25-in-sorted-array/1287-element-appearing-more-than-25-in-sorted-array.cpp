class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
         int c = 1;
         sort(arr.begin(),arr.end());
        
         for(int i = 0 ; i < arr.size()-1 ; i++){
            if(arr[i]==arr[i+1]){
                        c++;
            }
            else{
                if(c>arr.size()/4){
                    return arr[i];
                }
                c=1;
            }
         }
         if(c>arr.size()/4){
            return arr[arr.size()-1];
         }
  return 69;
    }

};