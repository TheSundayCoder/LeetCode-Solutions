class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int k = 0;
        vector<int> a(arr.size());
        for(int i = 0 ; i <arr.size(); i++){
            if(k==arr.size()){break;}
            if(arr[i]==0){
                a[k]=0;
                k++;
                if(k==arr.size()){break;}
                a[k]=0;
                k++;
            }
            else{
                a[k]=arr[i];
                k++;
            }
        }
        arr=a;
    }
};