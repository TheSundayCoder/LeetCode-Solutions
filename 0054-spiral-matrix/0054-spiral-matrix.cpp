class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
     int r1 = 0 , r2 = A.size()-1 , c1 = 0 , c2 = A[0].size()-1;int k =0;vector<int> x;
    while(r1<=r2&&c1<=c2){
        k++;
        if(k%4==1){
            for(int i = c1 ; i <= c2 ; i++){
                x.push_back(A[r1][i]);
            }r1++;
        }
        if(k%4==2){
            for(int i = r1 ; i <= r2 ; i++){
              x.push_back(A[i][c2]);
            }c2--;
        }
        if(k%4==3){
            for(int i = c2 ; i >=c1 ; i--){
                 x.push_back(A[r2][i]);
            }r2--;
        }
        if(k%4==0){
            for(int i = r2 ; i >=r1 ; i--){
                x.push_back(A[i][c1]);
            }c1++;
        }
    }
    
    return x;}
};