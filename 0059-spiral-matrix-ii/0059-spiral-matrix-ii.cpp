class Solution {
public:
    vector<vector<int>> generateMatrix(int A) {
         int r1 = 0 , r2 = A-1 , c1 = 0 , c2 = A-1;int k = 0 ;vector<vector<int>> f(A,vector<int>(A,0));int v = 1;
    while(r1<=r2&&c1<=c2){
        k++;
        if(k%4==1){
            for(int i = c1 ; i <= c2 ; i++){
                f[r1][i]=v++;
            }r1++;
        }
        if(k%4==2){
            for(int i = r1 ; i <= r2 ; i++){
                f[i][c2]=v++;
            }c2--;
        }
        if(k%4==3){
            for(int i = c2 ; i >=c1 ; i--){
                f[r2][i]=v++;
            }r2--;
        }
        if(k%4==0){
            for(int i = r2 ; i >=r1 ; i--){
                f[i][c1]=v++;
            }c1++;
        }
    }
    // for(int i = 0 ; i < A ; i++){f.push_back({});
    //     for(int j = 0 ; j < A ; j++){
    //         f[i].push_back(m[i][j]);
    //     }
    // }
    return f;
    }
};