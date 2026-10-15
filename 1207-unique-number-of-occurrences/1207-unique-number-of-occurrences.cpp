class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> a(2001,0);
        for(int i = 0 ; i < arr.size();i++){
             a[arr[i]+1000]++;
        }
        sort(a.begin() , a.end());
        for(int i = 0 ; i < 2000 ; i++){
            if(a[i]!=0&&a[i]==a[i+1]){
                return false;
            }
        }
         return true;
    }
};